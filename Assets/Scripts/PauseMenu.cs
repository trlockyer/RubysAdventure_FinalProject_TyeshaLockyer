using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class PauseMenu : MonoBehaviour
{

    public GameObject pauseMenu;
    public AudioSource musicSource;
    public AudioClip musicClipOne;

    //  Button Listener on PauseButton in MainScene
    public Button btn_Restart, btn_goRestart;

    // Start is called before the first frame update
    void Start()
    {
        // Pause Button Listener
        GetComponent<Button>().onClick.AddListener(TogglePauseMenu);

        // Pause Menu
        btn_Restart.onClick.AddListener(loadNewScene);
        pauseMenu.SetActive(false);

        // GameOver Menu
        btn_goRestart.onClick.AddListener(loadNewScene);
    }

    void TogglePauseMenu()
    {
        if (pauseMenu.activeSelf)
        {
            pauseMenu.SetActive(false);
        }
        else
        {
            pauseMenu.SetActive(true);
            musicSource.clip = musicClipOne;
            musicSource.Play();
        }
    }

    void loadNewScene()
    {
        SceneManager.LoadScene("MainScene", LoadSceneMode.Single);
    }
}
