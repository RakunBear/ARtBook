#if !(PLATFORM_LUMIN && !UNITY_EDITOR)

using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using OpenCVForUnity.CoreModule;
using OpenCVForUnity.ImgprocModule;
using OpenCVForUnity.UnityUtils.Helper;
using OpenCVForUnity.UnityUtils;
using System;

public class DocScan : MonoBehaviour
{
    public ScanSceneManager ScanSceneManager;
    // Grab the camera's view when this variable is true.
    private bool grabScreenshot;
    [SerializeField]
    [Tooltip("Assign the camera that is taking the screenshot")]
    private CameraRenderEvent cam;
    public RawImage camImage;
    public RawImage scanImage;
    public Texture2D _camtexture;
    Texture2D finalTexture;

    [HideInInspector]
    public int screenShotWidth;
    [HideInInspector]
    public int screenShotHeight;
    bool isScan = false;

    Mat yuvMat;
    Mat yMat;

    Mat inputDisplayAreaMat;
    Mat outputDisplayAreaMat;

    Scalar CONTOUR_COLOR;
#if UNITY_EDITOR
    [Header("UE_Test")]
    public Texture2D sampleTexture;
#endif

    // Start is called before the first frame update
    void Start()
    {
        if (cam == null)
        {
            // Not the most ideal search, Cameras should be tagged for search, or referenced.
            cam = GameObject.FindObjectOfType<CameraRenderEvent>();
        }
        if (cam != null)
        {
            //Subscribe to the Render event from the camera
            cam.OnPostRenderEvent += OnPostRender;
        }

        //Set the screen/image width and height parameters
        screenShotWidth = Screen.width;
        screenShotHeight = Screen.height;
        _camtexture = new Texture2D(screenShotWidth, screenShotHeight, TextureFormat.RGB24, false);

        //Set Mat
        inputDisplayAreaMat = new Mat(screenShotHeight, screenShotWidth, CvType.CV_8UC4, new Scalar(0, 0, 0, 255));

        yuvMat = new Mat();
        yMat = new Mat();
        CONTOUR_COLOR = new Scalar(255, 0, 0, 255);

        RunningShotMode();
    }

    void OnDestroy()
    {
        TextureMatDisposed();
        grabScreenshot = false;
    }

    public Texture2D GetFinalTexture()
    {
        return finalTexture ? finalTexture : null;
    }

    private void OnPostRender()
    {
        if (grabScreenshot)
        {
            _camtexture.ReadPixels(new UnityEngine.Rect(0, 0, screenShotWidth, screenShotHeight), 0, 0);
            camImage.texture = _camtexture;
        }

    }

    public void RunningShotMode()
    {
        grabScreenshot = true;
    }

    public void TakeScan()
    {
        isScan = true;
    }

    /// <summary>
    /// Raises the web cam texture to mat helper disposed event.
    /// </summary>
    public void TextureMatDisposed()
    {
        Debug.Log("OnWebCamTextureToMatHelperDisposed");

        if (yuvMat != null)
            yuvMat.Dispose();

        if (yMat != null)
            yMat.Dispose();
    }

    void Update()
    {
        if (grabScreenshot&&_camtexture)
        {
            Mat rgbaMat = new Mat(_camtexture.height, _camtexture.width, CvType.CV_8UC3);
            Utils.texture2DToMat(_camtexture, rgbaMat);
            outputDisplayAreaMat = new Mat(rgbaMat.rows(), rgbaMat.cols(), rgbaMat.type(), new Scalar(0, 0, 0, 255));
            // change the color space to YUV.
            Imgproc.cvtColor(rgbaMat, yuvMat, Imgproc.COLOR_RGBA2RGB);
            Imgproc.cvtColor(yuvMat, yuvMat, Imgproc.COLOR_RGB2YUV);
            // grap only the Y component.
            Core.extractChannel(yuvMat, yMat, 0);

            // blur the image to reduce high frequency noises.
            Imgproc.GaussianBlur(yMat, yMat, new Size(3, 3), 0);
            // find edges in the image.
            Imgproc.Canny(yMat, yMat, 50, 200, 3);

            // find contours.
            List<MatOfPoint> contours = new List<MatOfPoint>();
            Find4PointContours(yMat, contours);

            // pick the contour of the largest area and rearrange the points in a consistent order.
            MatOfPoint maxAreaContour = GetMaxAreaContour(contours);
            maxAreaContour = OrderCornerPoints(maxAreaContour);

            bool found = (maxAreaContour.size().area() > 0);
            if (found)
            {
                // trasform the prospective of original image.
                using (Mat transformedMat = PerspectiveTransform(rgbaMat, maxAreaContour))
                {
                    outputDisplayAreaMat.setTo(new Scalar(0, 0, 0, 255));

                    if (transformedMat.width() <= outputDisplayAreaMat.width() && transformedMat.height() <= outputDisplayAreaMat.height()
                        && transformedMat.total() >= outputDisplayAreaMat.total() / 16)
                    {
                        int x = outputDisplayAreaMat.width() / 2 - transformedMat.width() / 2;
                        int y = outputDisplayAreaMat.height() / 2 - transformedMat.height() / 2;
                        using (Mat dstAreaMat = new Mat(outputDisplayAreaMat, new OpenCVForUnity.CoreModule.Rect(x, y, transformedMat.width(),
                            transformedMat.height())))
                        {
                            transformedMat.copyTo(dstAreaMat);

                            if (isScan)
                            {
                                finalTexture = new Texture2D(dstAreaMat.width(), dstAreaMat.height(), TextureFormat.RGB24, false);
                                //convert matrix to texture 2d
                                Utils.matToTexture2D(dstAreaMat, finalTexture);

                                scanImage.texture = finalTexture;
                                
                                isScan = false;
                                grabScreenshot = false;

                                Point[] pts = maxAreaContour.toArray();
                                Point tl = pts[0];
                                Point tr = pts[1];
                                Point br = pts[2];
                                Point bl = pts[3];

                                double widthA = Math.Sqrt((br.x - bl.x) * (br.x - bl.x) + (br.y - bl.y) * (br.y - bl.y));
                                double widthB = Math.Sqrt((tr.x - tl.x) * (tr.x - tl.x) + (tr.y - tl.y) * (tr.y - tl.y));
                                int maxWidth = Math.Max((int)widthA, (int)widthB);

                                double heightA = Math.Sqrt((tr.x - br.x) * (tr.x - br.x) + (tr.y - br.y) * (tr.y - br.y));
                                double heightB = Math.Sqrt((tl.x - bl.x) * (tl.x - bl.x) + (tl.y - bl.y) * (tl.y - bl.y));
                                int maxHeight = Math.Max((int)heightA, (int)heightB);

                                maxWidth = (maxWidth < 1) ? 1 : maxWidth;
                                maxHeight = (maxHeight < 1) ? 1 : maxHeight;

                                Vector2 paperSize = new Vector2(maxWidth * 1.5f, maxHeight * 1.5f);
                                DataBox.Data.size = paperSize;
                                ScanSceneManager.OpenResultImage(paperSize);
                            }
                        }
                    }
                }
            }

            if (found)
            {
                // draw max area contour.
                Imgproc.drawContours(rgbaMat, new List<MatOfPoint> { maxAreaContour }, -1, CONTOUR_COLOR, 2);
            }

            rgbaMat.copyTo(inputDisplayAreaMat);

            Utils.matToTexture2D(inputDisplayAreaMat, _camtexture, true, 0, true);

            _camtexture.Apply();
        }
    }

    private void Find4PointContours(Mat image, List<MatOfPoint> contours)
    {
        contours.Clear();
        List<MatOfPoint> tmp_contours = new List<MatOfPoint>();
        Mat hierarchy = new Mat();
        Imgproc.findContours(image, tmp_contours, hierarchy, Imgproc.RETR_EXTERNAL, Imgproc.CHAIN_APPROX_SIMPLE);

        foreach (var cnt in tmp_contours)
        {
            MatOfInt hull = new MatOfInt();
            Imgproc.convexHull(cnt, hull, false);

            Point[] cnt_arr = cnt.toArray();
            int[] hull_arr = hull.toArray();
            Point[] pts = new Point[hull_arr.Length];
            for (int i = 0; i < hull_arr.Length; i++)
            {
                pts[i] = cnt_arr[hull_arr[i]];
            }

            MatOfPoint2f ptsFC2 = new MatOfPoint2f(pts);
            MatOfPoint2f approxFC2 = new MatOfPoint2f();
            MatOfPoint approxSC2 = new MatOfPoint();

            double arclen = Imgproc.arcLength(ptsFC2, true);
            Imgproc.approxPolyDP(ptsFC2, approxFC2, 0.01 * arclen, true);
            approxFC2.convertTo(approxSC2, CvType.CV_32S);

            if (approxSC2.size().area() != 4)
                continue;

            contours.Add(approxSC2);
        }
    }

    private MatOfPoint GetMaxAreaContour(List<MatOfPoint> contours)
    {
        if (contours.Count == 0)
            return new MatOfPoint();

        int index = -1;
        double area = 0;
        for (int i = 0; i < contours.Count; i++)
        {
            double tmp = Imgproc.contourArea(contours[i]);
            if (area < tmp)
            {
                area = tmp;
                index = i;
            }
        }
        return contours[index];
    }

    private MatOfPoint OrderCornerPoints(MatOfPoint corners)
    {
        if (corners.size().area() <= 0 || corners.rows() < 4)
            return corners;

        // rearrange the points in the order of upper left, upper right, lower right, lower left.
        using (Mat x = new Mat(corners.size(), CvType.CV_32SC1))
        using (Mat y = new Mat(corners.size(), CvType.CV_32SC1))
        using (Mat d = new Mat(corners.size(), CvType.CV_32SC1))
        using (Mat dst = new Mat(corners.size(), CvType.CV_32SC2))
        {
            Core.extractChannel(corners, x, 0);
            Core.extractChannel(corners, y, 1);

            // the sum of the upper left points is the smallest and the sum of the lower right points is the largest.
            Core.add(x, y, d);
            Core.MinMaxLocResult result = Core.minMaxLoc(d);
            dst.put(0, 0, corners.get((int)result.minLoc.y, 0));
            dst.put(2, 0, corners.get((int)result.maxLoc.y, 0));

            // the difference in the upper right point is the smallest, and the difference in the lower left is the largest.
            Core.subtract(y, x, d);
            result = Core.minMaxLoc(d);
            dst.put(1, 0, corners.get((int)result.minLoc.y, 0));
            dst.put(3, 0, corners.get((int)result.maxLoc.y, 0));

            dst.copyTo(corners);
        }
        return corners;
    }

    private Mat PerspectiveTransform(Mat image, MatOfPoint corners)
    {
        if (corners.size().area() <= 0 || corners.rows() < 4)
            return image;

        Point[] pts = corners.toArray();
        Point tl = pts[0];
        Point tr = pts[1];
        Point br = pts[2];
        Point bl = pts[3];

        double widthA = Math.Sqrt((br.x - bl.x) * (br.x - bl.x) + (br.y - bl.y) * (br.y - bl.y));
        double widthB = Math.Sqrt((tr.x - tl.x) * (tr.x - tl.x) + (tr.y - tl.y) * (tr.y - tl.y));
        int maxWidth = Math.Max((int)widthA, (int)widthB);

        double heightA = Math.Sqrt((tr.x - br.x) * (tr.x - br.x) + (tr.y - br.y) * (tr.y - br.y));
        double heightB = Math.Sqrt((tl.x - bl.x) * (tl.x - bl.x) + (tl.y - bl.y) * (tl.y - bl.y));
        int maxHeight = Math.Max((int)heightA, (int)heightB);

        maxWidth = (maxWidth < 1) ? 1 : maxWidth;
        maxHeight = (maxHeight < 1) ? 1 : maxHeight;

        Mat src = new Mat();
        corners.convertTo(src, CvType.CV_32FC2);
        Mat dst = new Mat(4, 1, CvType.CV_32FC2);
        dst.put(0, 0, 0, 0, maxWidth - 1, 0, maxWidth - 1, maxHeight - 1, 0, maxHeight - 1);

        // compute and apply the perspective transformation matrix.
        Mat outputMat = new Mat(maxHeight, maxWidth, image.type(), new Scalar(0, 0, 0, 255));
        Mat perspectiveTransform = Imgproc.getPerspectiveTransform(src, dst);
        Imgproc.warpPerspective(image, outputMat, perspectiveTransform, new Size(outputMat.cols(), outputMat.rows()));

        // return the transformed image.
        return outputMat;
    }
}
#endif