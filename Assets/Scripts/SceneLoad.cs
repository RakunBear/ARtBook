using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoad : MonoBehaviour
{
    public int num;
    void OnGUI()
    {

        // ��ư UI�� �ڵ������ ������ �� ��ư �̺�Ʈ(TakeSnapshot()) ����
        if (GUI.Button(new Rect(10, 120, 120, 30), "LoadScene"))
            LoadScene();

    }

    public void LoadScene()
    {
        SceneManager.LoadScene(num);
    }
}
