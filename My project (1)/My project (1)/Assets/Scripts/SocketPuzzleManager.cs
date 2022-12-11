using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SocketPuzzleManager : MonoBehaviour
{
    #region Variable Declarations
    [SerializeField] private int tasksToComplete;
   [SerializeField] private int completedTasks = 0;
    #endregion

    [Header("Completion Events")]
    public UnityEvent onPuzzleCompletion;

    public void CompletedPuzzleTask()
    {
        //Checks if puzzle has been completed
        completedTasks++;
        CheckForPuzzleCompletion();
    }

    private void CheckForPuzzleCompletion()
    {
        //Trigger event when puzzle is completed
        if(completedTasks >= tasksToComplete)
        {
            onPuzzleCompletion.Invoke();
        }
    }


    public void PuzzlePieceRemoved()
    {
        completedTasks--;
    }
}
