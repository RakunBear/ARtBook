using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoad : MonoBehaviour
{
    public int num;
    void OnGUI()
    {

        // 버튼 UI를 코드상으로 생성한 후 버튼 이벤트(TakeSnapshot()) 지정
        if (GUI.Button(new Rect(10, 120, 120, 30), "LoadScene"))
            LoadScene();

    }

    public void LoadScene()
    {
        SceneManager.LoadScene(num);
    }
}
