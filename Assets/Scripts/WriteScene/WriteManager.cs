using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;

public class WriteManager : MonoBehaviour
{
    public RawImage scanImage;
    public RawImage writeImage;
    public Texture2D writeTexture;
    public Canvas canvas;
    [Header("PenTool")]
    public Toggle penToggle;
    public Toggle eraserToggle;
    public bool isDraw = true;
    public bool isEraser = false;
    public int eraserTickness;

    bool drawing = false;
    Color[] clean_colours_array;
    Vector2 preMousePos;
    
    public GraphicRaycaster m_Raycaster;
    PointerEventData m_PointerEventData;
    public EventSystem m_EventSystem;


    private void Awake()
    {
        clean_colours_array = writeTexture.GetPixels();
        writeTexture.SetPixels(clean_colours_array);
    }
    // Start is called before the first frame update
    void Start()
    {
        if (DataBox.Data != null)
        {
            //scanImage.rectTransform.sizeDelta = DataBox.Data.size;
            scanImage.texture = DataBox.Data.scanTexture;
        }

        writeImage.texture = writeTexture;
        penToggle.isOn = true;
    }

    public void ToogleTool()
    {
        if (penToggle.isOn)
        {
            isDraw = true;
            isEraser = false;
        } else if (eraserToggle.isOn)
        {
            isDraw = false;
            isEraser = true;
        }
    }

    private void OnDisable()
    {
        writeTexture.SetPixels(clean_colours_array);
    }

    public void BackScene()
    {
        SceneManager.LoadScene("LobbyScene");
    }

    private void Update()
    {
        if (isDraw)
            Draw();
        if (isEraser)
            Eraser();
    }

    #region Drawing
    private void Draw()
    {
#if UNITY_EDITOR
        m_PointerEventData = new PointerEventData(m_EventSystem);
        m_PointerEventData.position = Input.mousePosition;
        List<RaycastResult> results = new List<RaycastResult>();
        m_Raycaster.Raycast(m_PointerEventData, results);

        if (results.Count < 1) return;
        else if (!results[0].gameObject.CompareTag("WriteTarget"))
            return;

        if (Input.GetMouseButtonDown(0))
        {
            drawing = true;
            Vector2 mousePos = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            Vector2 localPoint;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(scanImage.rectTransform, mousePos, null, out localPoint);
            mousePos = TouchToTextureCoordinate(mousePos);
            mousePos.x *= writeTexture.width;
            mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
            preMousePos = mousePos;
            writeTexture.DrawLine(preMousePos, mousePos, Color.black, 3);
        }
        else if (drawing && Input.GetMouseButton(0))
        { 
            Vector2 mousePos = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            Vector2 localPoint;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(scanImage.rectTransform, mousePos, null, out localPoint);
            mousePos = TouchToTextureCoordinate(mousePos);
            mousePos.x *= writeTexture.width;
            mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
            writeTexture.DrawLine(preMousePos, mousePos, Color.black, 3);
            preMousePos = mousePos;
            writeTexture.Apply();
        } else if (Input.GetMouseButtonUp(0))
        {
            drawing = false;
        }
#else
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);

            m_PointerEventData = new PointerEventData(m_EventSystem);
            m_PointerEventData.position = touch.position;
            List<RaycastResult> results = new List<RaycastResult>();
            m_Raycaster.Raycast(m_PointerEventData, results);

            if (!results[0].gameObject.CompareTag("WriteTarget"))
                return;

            if (touch.phase == TouchPhase.Began)
            {
                drawing = true;
                Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
                mousePos = TouchToTextureCoordinate(mousePos);
                mousePos.x *= writeTexture.width;
                mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
                preMousePos = mousePos;
                writeTexture.DrawLine(preMousePos, mousePos, Color.black, 3);
            }
            else if (drawing && touch.phase == TouchPhase.Moved)
            {
                Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
                mousePos = TouchToTextureCoordinate(mousePos);
                mousePos.x *= writeTexture.width;
                mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
                writeTexture.DrawLine(preMousePos, mousePos, Color.black, 3);
                preMousePos = mousePos;
                writeTexture.Apply();
            } else if (touch.phase == TouchPhase.Ended)
            {
                drawing = false;
            }
        }
#endif
    }

    public void Eraser()
    {
#if UNITY_EDITOR
        m_PointerEventData = new PointerEventData(m_EventSystem);
        m_PointerEventData.position = Input.mousePosition;
        List<RaycastResult> results = new List<RaycastResult>();
        m_Raycaster.Raycast(m_PointerEventData, results);

        if (!results[0].gameObject.CompareTag("WriteTarget"))
            return;

        if (Input.GetMouseButtonDown(0))
        {
            Vector2 mousePos = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            Vector2 localPoint;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(scanImage.rectTransform, mousePos, null, out localPoint);
            mousePos = TouchToTextureCoordinate(mousePos);
            mousePos.x *= writeTexture.width;
            mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
            preMousePos = mousePos;
            writeTexture.DrawLine(preMousePos, mousePos, Color.clear, eraserTickness);
        }
        else if (Input.GetMouseButton(0))
        {
            Vector2 mousePos = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
            mousePos = TouchToTextureCoordinate(mousePos);
            mousePos.x *= writeTexture.width;
            mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
            writeTexture.DrawLine(preMousePos, mousePos, Color.clear, eraserTickness);
            preMousePos = mousePos;
            writeTexture.Apply();
        }
#else
        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);

            m_PointerEventData = new PointerEventData(m_EventSystem);
            m_PointerEventData.position = touch.position;
            List<RaycastResult> results = new List<RaycastResult>();
            m_Raycaster.Raycast(m_PointerEventData, results);

            if (!results[0].gameObject.CompareTag("WriteTarget"))
                return;

            if (touch.phase == TouchPhase.Began)
            {
                Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
                mousePos = TouchToTextureCoordinate(mousePos);
                mousePos.x *= writeTexture.width;
                mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
                preMousePos = mousePos;
                writeTexture.DrawLine(preMousePos, mousePos, Color.clear, eraserTickness);
            }
            else if (touch.phase == TouchPhase.Moved)
            {
                Vector2 mousePos = new Vector2(touch.position.x, touch.position.y);
                mousePos = TouchToTextureCoordinate(mousePos);
                mousePos.x *= writeTexture.width;
                mousePos.y = (1.0f - mousePos.y) * writeTexture.height;
                writeTexture.DrawLine(preMousePos, mousePos, Color.clear, eraserTickness);
                preMousePos = mousePos;
                writeTexture.Apply();
            }
        }
#endif
    }

    private Vector2 TouchToTextureCoordinate(Vector2 touchPosition)
    {
        // Convert touch position to screen coordinates [0, 1]
        Vector2 screenCoordinate = touchPosition / new Vector2(Screen.width, Screen.height);

        // Convert screen coordinates to texture coordinates [0, 1]
        Vector2 textureCoordinate = new Vector2(screenCoordinate.x, 1f - screenCoordinate.y);

        return textureCoordinate;
    }
    #endregion
}
