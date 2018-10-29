using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.Video;

public class CLoadingLogoMovie : MonoBehaviour
{
    public GameObject ContentObject;
    VideoPlayer StartMovie;

    void Start()
    {
        StartMovie = GetComponent<VideoPlayer>();
        StartMovie.loopPointReached += OnMovieFinished;
    }

    void Update()
    {

    }

    void OnMovieFinished(UnityEngine.Video.VideoPlayer vp)
    {
        ContentObject.SetActive(true);
        gameObject.SetActive(false);
    }

}
