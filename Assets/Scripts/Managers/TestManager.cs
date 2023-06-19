using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class TestManager : MonoBehaviour
{
    // Start is called before the first frame update
    public GameObject targetObj;
    public RawImage raw;
    public Texture2D ReadTexture;
    public TextMeshProUGUI tete;

    [SerializeField]
    ARTrackedImageManager m_TrackedImageManager;

    public void AddImage(Texture2D imageToAdd)
    {
        if (m_TrackedImageManager.referenceLibrary is MutableRuntimeReferenceImageLibrary mutableLibrary)
        {
            mutableLibrary.ScheduleAddImageWithValidationJob(
                imageToAdd,
                "my new image",
                0.5f /* 50 cm */);
        }
    }

    private void Start()
    {

        StartCoroutine(SetRawInit());
    }

    public void BackScene()
    {
        SceneManager.LoadScene("LobbyScene");
    }

    public void LoadTexture(string path)
    {
        //FirebaseConnection.Instance.LoadList(DataBox.Data.QRString);
        tete.text = path;
        
        StartCoroutine(FirebaseConnection.Instance.LoadBytes(path, ReadTexture));
        
    }

    IEnumerator SetRawInit()
    {
        yield return new WaitUntil(() => m_TrackedImageManager != null);

        targetObj = m_TrackedImageManager.trackedImagePrefab;
        raw = targetObj.GetComponentInChildren<RawImage>();
        raw.texture = ReadTexture;
        raw.gameObject.SetActive(true);
    }

}
