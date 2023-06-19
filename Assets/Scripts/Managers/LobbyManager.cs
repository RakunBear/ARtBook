using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LobbyManager : MonoBehaviour
{
    [Header("Body-Buttons")]
    public Button GoScanButton;
    public Button GoReadButton;
    public Button GoPaintButton;
    [Header("Bottom-Buttons")]
    public Button GoHomeButton;
    public Button GoBookButton;
    public Button GoProfileButton;
    [Header("Top-Buttons")]
    public Button GoMenuButton;


    void Start()
    {
        Screen.orientation = ScreenOrientation.Portrait;
        GoScanButton.onClick.AddListener(() => GoScanScene());
        GoReadButton.onClick.AddListener(() => GoReadScene());
        GoPaintButton.onClick.AddListener(() => TestScene());
    }

    private void Update()
    {
        ExitApp();
    }

    private void GoScanScene()
    {
        SceneManager.LoadScene("ScanScene");
    }

    private void GoReadScene()
    {
        SceneManager.LoadScene("ReadScene");
    }

    private void TestScene()
    {
        SceneManager.LoadScene(4);
    }

    private void ExitApp()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }
}
