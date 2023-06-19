using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using System.Threading;
using UnityEngine;
using Firebase.Extensions;
using Firebase.Storage;
using Firebase.Database;
using UnityEngine.UI;

public class FirebaseConnection : MonoBehaviour
{
    public static FirebaseConnection Instance;

    private void Awake()
    {
        if (Instance)
        {
            Destroy(this);
        } else
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
    }

    public GameObject loadingPopup;
    public GameObject uploadPopup;

    public FirebaseStorage storage;
    public StorageReference storageRef;
    public DatabaseReference databaseRef;

    public Dictionary<string, object> curruntDic;

    #region Popup
    private void DisableUploadPopup()
    {
        uploadPopup.SetActive(false);
    }
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        Init();
    }

    public void Init()
    {
        // Get a reference to the storage service, using the default Firebase App
        storage = FirebaseStorage.DefaultInstance;

        // Create a storage reference from our storage service
        storageRef = storage.GetReferenceFromUrl("gs://unity-tempserver.appspot.com");

        databaseRef = FirebaseDatabase.DefaultInstance.RootReference;
    }

    public void UploadBytes(Texture2D texture, string folder, string fileName)
    {
        byte[] customBytes = texture.EncodeToPNG();
        //byte[] customBytes = texture.GetRawTextureData();
        string customByteLength = customBytes.Length.ToString();

        StorageReference targetReference = storageRef.Child(folder + "/" + fileName + ".png");

        var newMetadata = new MetadataChange { 
            CustomMetadata = new Dictionary<string, string>
            {
                { "bytelength", customByteLength }
            }
        };

        targetReference.PutBytesAsync(customBytes, newMetadata,
            new StorageProgress<UploadState>(state => {
                Debug.Log(String.Format("Progress: {0} of {1} bytes transferred.",
                    state.BytesTransferred, state.TotalByteCount));
            }), CancellationToken.None, null)
            .ContinueWith((Task<StorageMetadata> task) => {

                if (task.IsFaulted || task.IsCanceled)
                {
                    Debug.Log(task.Exception.ToString());
                }
                else
                {
                    // Metadata contains file metadata such as size, content-type, and md5hash.
                    StorageMetadata metadata = task.Result;
                            string md5Hash = metadata.Md5Hash;
                            Debug.Log("Finished uploading...");
                            Debug.Log("md5 hash = " + md5Hash);
                    
                }
            });

        StartCoroutine(UpdateList(folder, fileName));

    }

    public IEnumerator UpdateList(string folder, string fileName)
    {
        bool isLoad = false;

        Dictionary<string, object> dictionary = new Dictionary<string, object>();
        dictionary[fileName] = fileName + ".png";
        loadingPopup.SetActive(true);
        string json = JsonUtility.ToJson(dictionary);
        databaseRef.Child(folder).UpdateChildrenAsync(dictionary)
        .ContinueWith(task =>
        {

            if (task.IsFaulted)
            {
                Debug.Log(task.Exception.ToString());
            }
            else if (task.IsCompleted)
            {
                // 등록 성공 시 처리
                Debug.Log("데이터 등록 완료");
            }

            isLoad = true;
        });

        yield return new WaitUntil(() => isLoad == true);

        loadingPopup.SetActive(false);
        uploadPopup.SetActive(true);
        Invoke("DisableUploadPopup", 1.0f);
    }

    public IEnumerator LoadBytes(string path, Texture2D targetTexture)
    {
        bool isLoad = false;
        long target_bytelength = 0;
        loadingPopup.SetActive(true);
        StorageReference targetRef = storageRef.Child(path);

        targetRef.GetMetadataAsync().ContinueWithOnMainThread(task => {
            if (!task.IsFaulted && !task.IsCanceled)
            {
                StorageMetadata meta = task.Result;
                target_bytelength = long.Parse(meta.GetCustomMetadata("bytelength"));
            }
            else
            {
                Debug.LogException(task.Exception);
            }
        });

        targetRef.GetBytesAsync(target_bytelength, new StorageProgress<DownloadState>(state => {
            Debug.Log(String.Format("Progress: {0} of {1} bytes transferred.",
                state.BytesTransferred, state.TotalByteCount));
        }), CancellationToken.None)
        .ContinueWithOnMainThread(task => {

            if (task.IsFaulted || task.IsCanceled)
            {
                Debug.LogException(task.Exception);
            }
            else
            {
                byte[] customBytes = task.Result;
                targetTexture.LoadImage(customBytes);
                Debug.Log("Finished downloading!");
            }
            isLoad = true;
        });
        
        yield return new WaitUntil(() => isLoad == true);
        targetTexture.Apply();
        loadingPopup.SetActive(false);
    }

    public IEnumerator LoadList(ReaderManager readerManager, string folder)
    {
        bool isLoad = false;
        loadingPopup.SetActive(true);
        databaseRef.Child(folder).GetValueAsync().ContinueWith(task =>
        {

            if (task.IsFaulted)
            {
                // 불러오기 실패 시 에러 처리
                Debug.Log("LoadList Failed");
            }
            else if (task.IsCompleted)
            {
                DataSnapshot snapshot = task.Result;
                if (snapshot.Exists)
                {

                    var dictionary = snapshot.Value as Dictionary<string, object>;
                    if (dictionary != null)
                    {
                        curruntDic = dictionary;
                        //readerManager.SetList(folder, dictionary);
                    }
                
                }
                else
                {
                    // 불러온 데이터가 없을 때 처리
                    Debug.Log("List Data None");
                }
            }
            isLoad = true;
        });

        yield return new WaitUntil(() => isLoad == true);
        loadingPopup.SetActive(false);
        readerManager.SetList(folder, curruntDic);
    }
}
