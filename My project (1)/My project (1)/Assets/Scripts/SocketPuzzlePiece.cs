using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class SocketPuzzlePiece : MonoBehaviour
{
    #region Variable Declarations
    [SerializeField] private SocketPuzzleManager linkedPuzzleManager;
    [SerializeField] private Transform CorrectPuzzlePiece;
    private XRSocketInteractor socket;
    #endregion

    private void Awake() => socket = GetComponent<XRSocketInteractor>();

    private void OnEnable()
    {
        socket.selectEntered.AddListener(ObjectSnapped);
        socket.selectExited.AddListener(ObjectRemoved);
    }

    private void OnDisable()
    {
        socket.selectEntered.AddListener(ObjectSnapped);
        socket.selectExited.AddListener(ObjectRemoved);

    }

    private void ObjectSnapped(SelectEnterEventArgs arg0)
    {
        var snappedObjectName = arg0.interactableObject;
        if(snappedObjectName.transform.name == CorrectPuzzlePiece.name)
        {
            linkedPuzzleManager.CompletedPuzzleTask();
        }
    }
    private void ObjectRemoved(SelectExitEventArgs arg0)
    {
        var removedObjectName = arg0.interactableObject;
        if (removedObjectName.transform.name == CorrectPuzzlePiece.name)
        {
            linkedPuzzleManager.PuzzlePieceRemoved();
        }
    }
}
