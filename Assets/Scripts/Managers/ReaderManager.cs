using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ReaderManager : MonoBehaviour
{
    // Start is called before the first frame update
    public QRCodeDetectController QRCodeDetectController;
    //public GameObject targetObj;
    public RawImage raw;
    public Texture2D ReadTexture;
    [Header("Guide")]
    public TextMeshProUGUI qrGuideText;
    public GameObject reReadingButton;
    [Header("FBList")]
    public GameObject FbList;
    public GameObject listTextPrefab;
    [Header("Tracking")]
    public GameObject TrackingUI;
    public RawImage TrackingRaw;
    public Button TrackingConfirm;
    private Texture2D _getTexture;
    private RuntimeReferenceImageLibrary library;

    [SerializeField]
    ARTrackedImageManager m_TrackedImageManager;

    public void AddImage(Texture2D imageToAdd)
    {
        TrackingRaw.texture = imageToAdd;
        _getTexture = imageToAdd;
    }

    private void ConfirmImage()
    {
        m_TrackedImageManager.enabled = true;
        library = m_TrackedImageManager.CreateRuntimeLibrary();
        m_TrackedImageManager.referenceLibrary = library;
        if (m_TrackedImageManager.referenceLibrary is MutableRuntimeReferenceImageLibrary mutableLibrary)
        {
            mutableLibrary.ScheduleAddImageWithValidationJob(
                _getTexture,
                "targetImage",
                0.5f /* 50 cm */);
        }
        QRCodeDetectController.grabPaper = false;
    }

    public void ReReading()
    {
        FbList.SetActive(false);
        TrackingUI.SetActive(false);
        qrGuideText.gameObject.SetActive(true);
        QRCodeDetectController.RunningShotMode();
        reReadingButton.SetActive(false);
    }

    private void Start()
    {
        //Screen.orientation = ScreenOrientation.LandscapeLeft;
        TrackingConfirm.onClick.AddListener(() => {
            ConfirmImage();
            TrackingConfirm.transform.parent.parent.gameObject.SetActive(false);
        }) ;
        StartCoroutine(SetRawInit());
    }
    IEnumerator SetRawInit()
    {
        yield return new WaitUntil(() => m_TrackedImageManager != null);

        var targetObj = m_TrackedImageManager.trackedImagePrefab;
        raw = targetObj.GetComponentInChildren<RawImage>();
        raw.texture = ReadTexture;

        m_TrackedImageManager.enabled = false;
    }

    public void BackScene()
    {
        SceneManager.LoadScene("LobbyScene");
    }

    public void LoadTexture(string path)
    {

        StartCoroutine(FirebaseConnection.Instance.LoadBytes(path, ReadTexture));
        TrackingUI.SetActive(true);
    }

    //public void UpdatePosition(Vector2 size, Vector3 pos)
    //{
    //    if (!isLoad) return;
    //    raw.rectTransform.sizeDelta = size;
    //    raw.rectTransform.position = pos;
    //}

    public void LoadList(string qrText)
    {
        StartCoroutine(FirebaseConnection.Instance.LoadList(this, qrText));
        qrGuideText.gameObject.SetActive(false);
        FbList.SetActive(true);
        reReadingButton.SetActive(true);
    }

    public void SetList(string folder, Dictionary<string, object> dic)
    {
        foreach (KeyValuePair<string, object>item in dic) {
            
            GameObject obj = Instantiate(listTextPrefab, listTextPrefab.transform.parent);
            Debug.Log(item.Key);
            Debug.Log(item.Value.ToString());
            obj.TryGetComponent(out TextMeshProUGUI listText);
            if (listText == null) return;
            listText.text = item.Key;

            obj.TryGetComponent(out Button listButton);
            listButton.onClick.AddListener(() =>
            {
                string path = $"{folder}/{item.Value}";
                LoadTexture(path);
                FbList.SetActive(false);
            });

            obj.gameObject.SetActive(true);
        }
    }
}
