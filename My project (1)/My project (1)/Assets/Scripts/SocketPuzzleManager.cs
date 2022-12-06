using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class SocketPuzzleManager : MonoBehaviour
{
    [SerializeField] private int tasksToComplete;
   [SerializeField] private int completedTasks = 0;

    [Header("Completion Events")]
    public UnityEvent onPuzzleCompletion;

    public void CompletedPuzzleTask()
    {
        completedTasks++;
        CheckForPuzzleCompletion();
    }

    private void CheckForPuzzleCompletion()
    {
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
