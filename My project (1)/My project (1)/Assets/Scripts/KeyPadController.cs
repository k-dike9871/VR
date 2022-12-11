using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using TMPro;
using System;

public class KeyPadController : MonoBehaviour
{
    #region Variable Declarations
    public List<int> correctPassword = new List<int>();
    private List<int> inputPasswordList = new List<int>();
    [SerializeField] private TMP_InputField codeDisplay;
    [SerializeField] private float resetTime = 2f;
    [SerializeField] private string successText;
    [Space(5f)]
    [Header("Keypad Entry Events")]
    public UnityEvent oncorrectPassword;
    public UnityEvent onIncorrectPassword;

    public bool allowMultipleActivations = false;
    private bool hasUsedCorrectCode = false;
    public bool HasUsedCorrectCode { get { return hasUsedCorrectCode; } }
    #endregion

    public void UserNumberEntry(int selectedNum)
    {
        //Unable to input anymore than 4 numbers
        if (inputPasswordList.Count >= 4)
            return;

        inputPasswordList.Add(selectedNum);

        UpdateDisplay();

        if (inputPasswordList.Count >= 4)
            CheckPassword();
        //At 4 numbers, checks if password is correct
    }

    private void CheckPassword()
    {
        for(int i = 0; i < correctPassword.Count; i++)
        {
            if(inputPasswordList[i] != correctPassword[i])
            {
                IncorrectPassword();
                return;
            }
        }
        correctPasswordGiven();
    }

    private void correctPasswordGiven()
    {
        if (allowMultipleActivations)
        {
            //Check Box in engine to allow multiple uses for the password
            oncorrectPassword.Invoke();
            codeDisplay.text = successText;
            StartCoroutine(ResetKeycode());
        }
        else if(!allowMultipleActivations && !hasUsedCorrectCode)
        {
            //Starts event after successful password
            oncorrectPassword.Invoke();
            hasUsedCorrectCode = true;
            codeDisplay.text = successText;
        }
    }

    private void IncorrectPassword()
    {
        //Reset the display after wrong password
        onIncorrectPassword.Invoke();
        StartCoroutine(ResetKeycode());
    }

    private void UpdateDisplay()
    {
        codeDisplay.text = null;
        for(int i = 0; i < inputPasswordList.Count; i++)
        {
            codeDisplay.text += inputPasswordList[i];
        }
    }

    public void DeleteEntry()
    {
        if (inputPasswordList.Count <= 0)
            return;

        var listPosition = inputPasswordList.Count - 1;
        inputPasswordList.RemoveAt(listPosition);

        UpdateDisplay();
    }

    IEnumerator ResetKeycode()
    {
        //Small delay before restting password
        yield return new WaitForSeconds(resetTime);

        inputPasswordList.Clear();
        codeDisplay.text = "Enter Code...";
    }
}
