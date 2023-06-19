using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataBox : MonoBehaviour
{
    private static DataBox data;
    public static DataBox Data
    {
        get
        {
            if (data == null)
                return null;
            else
                return data;
        }
    }

    public Texture2D scanTexture;
    public string QRString;
    public Vector2 size;
    public Vector2 pos;

    private void Awake()
    {
        #region singlton
        if (DataBox.data)
        {
            Destroy(this);
        } else
        {
            DataBox.data = this;
            DontDestroyOnLoad(gameObject);
        }
        #endregion
    }
}
