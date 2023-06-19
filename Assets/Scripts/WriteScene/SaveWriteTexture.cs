using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class SaveWriteTexture : MonoBehaviour
{
    public WriteManager WriteManager;
    [Header("Button")]
    public Button ShowUploadWindowButton;
    [Header("UploadWindow")]
    public GameObject UploadWindow;
    public Button UploadButton;
    public Button CancleButton;
    public TMP_InputField FolderText;
    public TMP_InputField FileText;

    private void Start()
    {
        ShowUploadWindowButton.onClick.AddListener(() => ShowUploadWindow());
        UploadButton.onClick.AddListener(() => UploadTexture());
        CancleButton.onClick.AddListener(() => UploadWindow.SetActive(false));
    }

    
    public void ShowUploadWindow()
    {
        UploadWindow.SetActive(true);
    }

    private void UploadTexture()
    {
        string folder = FolderText.text;
        string file = FileText.text;
        FirebaseConnection.Instance.UploadBytes(WriteManager.writeTexture, folder, file);
        UploadWindow.SetActive(false);
    }
}
