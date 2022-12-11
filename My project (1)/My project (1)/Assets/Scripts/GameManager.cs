using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    #region Variable Declarations
    public GameObject gameOverUI;
    bool gameHasEnded = false;
    #endregion

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
