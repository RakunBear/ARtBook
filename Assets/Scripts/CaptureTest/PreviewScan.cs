using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PreviewScan : MonoBehaviour
{
    public CanvasScaler canvasScaler;
    public DocScan docScan;
    public Button confirmButton;

    public RawImage rawImage;
    RectTransform originRect;
    float originWidth, originHeight;
    Vector2 originAnchoredPosition;
    bool isFull = false;

    private void Start()
    {
        TryGetComponent(out rawImage);

        //if (transform.parent)
        //{
        //    originRect = transform.parent.GetComponent<RectTransform>();
        //}
        //else
        //{
        //    originRect = rawImage.GetComponent<RectTransform>();
        //}
        //originWidth = originRect.rect.width;
        //originHeight = originRect.rect.height;
        //originAnchoredPosition = originRect.anchoredPosition;

        confirmButton.onClick.AddListener(() =>
        {
            DataBox.Data.scanTexture = docScan.GetFinalTexture() ? docScan.GetFinalTexture() : (Texture2D)rawImage.texture;
            SceneManager.LoadScene("WriteScene");
        });
    }

    //public void FullScreen()
    //{
    //    if (!isFull)
    //    {
    //        isFull = true;
    //        confirmButton.gameObject.SetActive(true);
    //        originRect.sizeDelta = new Vector2(canvasScaler.referenceResolution.x, canvasScaler.referenceResolution.y);
    //        originRect.anchoredPosition = Vector2.zero;


    //    } else
    //    {
    //        isFull = false;
    //        confirmButton.gameObject.SetActive(false);
    //        originRect.sizeDelta = new Vector2(originWidth, originHeight);
    //        originRect.anchoredPosition = originAnchoredPosition;
    //    }
    //}
}
