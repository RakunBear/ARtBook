using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ScanSceneManager : MonoBehaviour
{
    public DocScan DocScan;
    public GameObject ResultObject;
    public GameObject shotButton;
    
    private void Start()
    {
        //Screen.orientation = ScreenOrientation.LandscapeLeft;
        ResultObject.SetActive(false);
        shotButton.SetActive(true);
    }

    public void CloseResultImage()
    {
        ResultObject.SetActive(false);
        shotButton.SetActive(true);
        DocScan.RunningShotMode();
    }

    public void OpenResultImage(Vector2 size)
    {
        ResultObject.GetComponent<RectTransform>().sizeDelta = size;
        ResultObject.SetActive(true);
        shotButton.SetActive(false);
    }

    public void BackScene()
    {
        SceneManager.LoadScene("LobbyScene");
    }
}
