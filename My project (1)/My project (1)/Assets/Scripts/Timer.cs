using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.Events;

public class Timer : MonoBehaviour
{
    #region Variable Declarations
    public GameObject GameOver;
    public Slider timerSlider;
    public TextMeshProUGUI timerText;
    public float gameTime;

    public Event TimeOver;

    private bool stopTimer;
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        stopTimer = false;
        timerSlider.maxValue = gameTime;
        timerSlider.value = gameTime;
    }

    // Update is called once per frame
    void Update()
    {
        float time = gameTime - Time.time;

        int minutes = Mathf.FloorToInt(time / 60);
        int seconds = Mathf.FloorToInt(time - minutes * 60f);

        string textTime = string.Format("{0:0}:{1:00}", minutes, seconds);

        if(time <= 0)
        {
            //Display game over screen when timer runs out
            stopTimer = true;
            FindObjectOfType<GameManager>().endgame();
        }

        if(stopTimer == false)
        {
            timerText.text = textTime;
            timerSlider.value = time;
        }
    }

}
