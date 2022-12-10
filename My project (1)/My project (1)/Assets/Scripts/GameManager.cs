using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    public GameObject gameOverUI;
    bool gameHasEnded = false;

    public void endgame()
    {
        if(gameHasEnded == false)
        {
            gameHasEnded = true;
            Debug.Log("Game Over");
            //Displays Game Over Screen
            gameOverUI.SetActive(true);
        }
    }

    public void Quit()
    {
        //Quit Game
        Application.Quit();
    }
}
