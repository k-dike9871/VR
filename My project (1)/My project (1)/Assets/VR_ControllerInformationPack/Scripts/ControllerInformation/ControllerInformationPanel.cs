#region HEADER BLOCK
/**
 * @brief		File containing ControllerInformationPanel class definition
 * @details		The ControllerInformationPanel class is responsible for displaying the controller information on its relevant information panel on the scene
 * @author		Mario Bagnoli
 * @date		First created: 22/10/2022
 */
#endregion


using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ControllerInformationPanel : MonoBehaviour
{
    /**
     *  Editor set flag to know if we are going to read information from the left or right controller
     *  
     *  bIsLeftController = false;   <- We will read information from the right controller
     *  bIsLeftController = true;    <- We will read information from the left controller
     */
    public bool bIsLeftController;

    /**
     *  Editor set reference to the controller information script.
     */ 
    public ControllerInformation m_controllerInfo;


    /**
     *  Editor set reference to the Orientation label of this information panel
     */ 
    [SerializeField]
    TMPro.TextMeshPro m_currentOrientationTxt;


    /**
     *  Public accessor for m_currentOrientationTxt
     */
    public TextMeshPro CurrentOrientationTxt
    {
        get
        {
            return m_currentOrientationTxt;
        }
        set
        {
            m_currentOrientationTxt = value;
        }
    }

    /**
    *  Editor set reference to the Position label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_currentPositionTxt;



    /**
     *  Public accessor for m_currentPositionTxt
     */
    public TextMeshPro CurrentPositionTxt
    {
        get
        {
            return m_currentPositionTxt;
        }
        set
        {
            m_currentPositionTxt = value;
        }
    }

    /**
    *  Editor set reference to the Velocity label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_currentVelocityTxt;


    /**
    *  Public accessor for m_currentPositionTxt
    */
    public TextMeshPro CurrentVelocityTxt
    {
        get
        {
            return m_currentVelocityTxt;
        }
        set
        {
            m_currentVelocityTxt = value;
        }
    }

    /**
    *  Editor set reference to the Speed label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_currentSpeedTxt;

    /**
    *  Public accessor for m_currentSpeedTxt
    */
    public TextMeshPro CurrentSpeedTxt
    {
        get
        {
            return m_currentSpeedTxt;
        }
        set
        {
            m_currentSpeedTxt = value;
        }
    }

    /**
    *  Editor set reference to the Grip Pressure label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_currentGripPressureTxt;

    /**
    *  Public accessor for m_currentGripPressureTxt
    */
    public TextMeshPro CurrentGripPressureTxt
    {
        get
        {
            return m_currentGripPressureTxt;
        }
        set
        {
            m_currentGripPressureTxt = value;
        }
    }

    /**
    *  Editor set reference to the Grip Pressed label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_isGripPressedTxt;


    /**
    *  Public accessor for m_isGripPressedTxt
    */
    public TextMeshPro CurrentGripPressedTxt
    {
        get
        {
            return m_isGripPressedTxt;
        }
        set
        {
            m_isGripPressedTxt = value;
        }
    }

    /**
    *  Editor set reference to the Trigger Pressure label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_currentTriggerPressureTxt;

    /**
    *  Public accessor for m_currentTriggerPressureTxt
    */
    public TextMeshPro CurrentTriggerPressureTxt
    {
        get
        {
            return m_currentTriggerPressureTxt;
        }
        set
        {
            m_currentTriggerPressureTxt = value;
        }
    }

    /**
    *  Editor set reference to the Trigger Pressed label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_isTriggerPressedTxt;

    /**
    *  Public accessor for m_isTriggerPressedTxt
    */
    public TextMeshPro CurrentTriggerPressedTxt
    {
        get
        {
            return m_isTriggerPressedTxt;
        }
        set
        {
            m_isTriggerPressedTxt = value;
        }
    }


    /**
    *  Editor set reference to the Primary Button Pressed label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_isPrimaryBPressedTxt;


    /**
    *  Public accessor for m_isPrimaryBPressedTxt
    */
    public TextMeshPro CurrentPrimaryBPressedTxt
    {
        get
        {
            return m_isPrimaryBPressedTxt;
        }
        set
        {
            m_isPrimaryBPressedTxt = value;
        }
    }


    /**
    *  Editor set reference to the Secondary Button Pressed label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_isSecondaryBPressedTxt;

    /**
    *  Public accessor for m_isSecondaryBPressedTxt
    */
    public TextMeshPro CurrentSecondaryBPressedTxt
    {
        get
        {
            return m_isSecondaryBPressedTxt;
        }
        set
        {
            m_isSecondaryBPressedTxt = value;
        }
    }


    /**
    *  Editor set reference to the Thumbstick Pressed label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_isThumbStickPressedTxt;

    /**
    *  Public accessor for m_isThumbStickPressedTxt
    */
    public TextMeshPro CurrentThumbStickPressedTxt
    {
        get
        {
            return m_isThumbStickPressedTxt;
        }
        set
        {
            m_isThumbStickPressedTxt = value;
        }
    }


    /**
    *  Editor set reference to the Thumbstick Touched label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_isThumbStickTouchedTxt;

    /**
    *  Public accessor for m_isThumbStickPressedTxt
    */
    public TextMeshPro CurrentThumbStickTouchedTxt
    {
        get
        {
            return m_isThumbStickTouchedTxt;
        }
        set
        {
            m_isThumbStickTouchedTxt = value;
        }
    }

    /**
    *  Editor set reference to the Thumbstick Axis label of this information panel
    */
    [SerializeField]
    TMPro.TextMeshPro m_thumbStickAxisValueTxt;

    /**
    *  Public accessor for m_thumbStickAxisValueTxt
    */
    public TextMeshPro CurrentThumbStickAxisValueTxt
    {
        get
        {
            return m_thumbStickAxisValueTxt;
        }
        set
        {
            m_thumbStickAxisValueTxt = value;
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Attempt to request, store and display the relevant controller information
        setControllerInformationPanel();
    }


    /**
     *  Function to request, store and display the relevant controller information
     */
    private void setControllerInformationPanel()
    {
        // If the reference to the controller information script does not exist, return and do nothing
        if(m_controllerInfo == null)
        {
            return;
        }

        // Individual functions to store the relevant controller information.
        // They should be self explanatory, just pay attention to the function names.
        setControllerPosition();
        setControllerOrientation();
        setControllerVelocity();
        setControllerSpeed();
        setControllerGripPressure();
        setIsGripPresed();
        setControllerTriggerPressure();
        setIsTriggerPresed();
        setIsPrimaryBPresed();
        setIsSecondaryBPresed();
        setCurrentThumbStickAxisValue();
        setIsThumbStickPresed();
        setIsThumbStickTouched();
    }


    /**
     *  Function to request, store and display the current controller position
     */ 
    private void setControllerPosition()
    {
        // If the position label of the information panel does not exist, return and do nothing.
        if(m_currentPositionTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if(bIsLeftController)
        {
            // Get access to the LeftControllerPosition variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the position label of this information panel.
            m_currentPositionTxt.text = m_controllerInfo.LeftControllerPosition.ToString();
        }
        else
        {
            // Get access to the RightControllerPosition variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the position label of this information panel.
            m_currentPositionTxt.text = m_controllerInfo.RightControllerPosition.ToString();
        }
       
    }

    /**
    *  Function to request, store and display the current controller Orientation
    */
    private void setControllerOrientation()
    {
        // If the orientation label of the information panel does not exist, return and do nothing.
        if (m_currentOrientationTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the LeftControllerOrientation variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the orientation label of this information panel.
            m_currentOrientationTxt.text = m_controllerInfo.LeftControllerOrientation.ToString();
        }
        else
        {
            // Get access to the RightControllerOrientation variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the orientation label of this information panel.
            m_currentOrientationTxt.text = m_controllerInfo.RightControllerOrientation.ToString();
        }

    }

    /**
    *  Function to request, store and display the current controller Velocity
    */
    private void setControllerVelocity()
    {
        // If the velocity label of the information panel does not exist, return and do nothing.
        if (m_currentVelocityTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the LeftControllerVelocity variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the velocity label of this information panel.
            m_currentVelocityTxt.text = m_controllerInfo.LeftControllerVelocity.ToString();
        }
        else
        {
            // Get access to the RightControllerVelocity variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the velocity label of this information panel.
            m_currentVelocityTxt.text = m_controllerInfo.RightControllerVelocity.ToString();
        }

    }

    /**
    *  Function to request, store and display the current controller Speed.
    *  
    *  IMPORTANT!!!
    *  UnityEngine.XR.CommonUsages does not provide information of the controller SPEED.
    *  However, we can calculate the speed of the controller by getting the magnitude of the velocity.
    *  Speed is the magnitude of the Velocity.
    *  Example:
    *  
    *  fSpeed = aVelocityVector.Magnitude();
    */
    private void setControllerSpeed()
    {
        // If the speed label of the information panel does not exist, return and do nothing.
        if (m_currentSpeedTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the LeftControllerVelocity variable from the m_controllerInfo script.
            // Extract the magnitude of the LeftControllerVelocity
            // Convert its value to a string and store it in the text variable of the speed label of this information panel.
            m_currentSpeedTxt.text = m_controllerInfo.LeftControllerVelocity.magnitude.ToString();
        }
        else
        {
            // Get access to the RightControllerVelocity variable from the m_controllerInfo script.
            // Extract the magnitude of the RightControllerVelocity
            // Convert its value to a string and store it in the text variable of the speed label of this information panel.
            m_currentSpeedTxt.text = m_controllerInfo.RightControllerVelocity.magnitude.ToString();
        }
    }

    /**
    *  Function to request, store and display the current grip pressure
    */
    private void setControllerGripPressure()
    {
        // If the grip pressure label of the information panel does not exist, return and do nothing.
        if (m_currentGripPressureTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the LeftControllerGrip variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the grip pressure label of this information panel.
            m_currentGripPressureTxt.text = m_controllerInfo.LeftControllerGrip.ToString();
        }
        else
        {
            // Get access to the RigthControllerGrip variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the grip pressure label of this information panel.
            m_currentGripPressureTxt.text = m_controllerInfo.RigthControllerGrip.ToString();
        }
    }

    /**
    *  Function to request, store and display the current grip press information
    */
    private void setIsGripPresed()
    {
        // If the grip pressed label of the information panel does not exist, return and do nothing.
        if (m_isGripPressedTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the IsLeftGripPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the grip pressed label of this information panel.
            m_isGripPressedTxt.text = m_controllerInfo.IsLeftGripPressed.ToString();
        }
        else
        {
            // Get access to the IsRightGripPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the grip pressed label of this information panel.
            m_isGripPressedTxt.text = m_controllerInfo.IsRightGripPressed.ToString();
        }
    }

    /**
    *  Function to request, store and display the current trigger pressure information
    */
    private void setControllerTriggerPressure()
    {
        // If the trigger pressure label of the information panel does not exist, return and do nothing.
        if (m_currentTriggerPressureTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the LeftControllerTriggerPressure variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the trigger pressure label of this information panel.
            m_currentTriggerPressureTxt.text = m_controllerInfo.LeftControllerTriggerPressure.ToString();
        }
        else
        {
            // Get access to the RigthControllerTriggerPressure variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the trigger pressure label of this information panel.
            m_currentTriggerPressureTxt.text = m_controllerInfo.RigthControllerTriggerPressure.ToString();
        }
    }

    /**
    *  Function to request, store and display the current trigger press information
    */
    private void setIsTriggerPresed()
    {
        // If the trigger pressed label of the information panel does not exist, return and do nothing.
        if (m_isTriggerPressedTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the IsLeftTriggerPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the trigger pressed label of this information panel.
            m_isTriggerPressedTxt.text = m_controllerInfo.IsLeftTriggerPressed.ToString();
        }
        else
        {
            // Get access to the IsRightTriggerPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the trigger pressed label of this information panel.
            m_isTriggerPressedTxt.text = m_controllerInfo.IsRightTriggerPressed.ToString();
        }
    }


    /**
    *  Function to request, store and display the current primary button information
    */
    private void setIsPrimaryBPresed()
    {
        // If the primary button pressed label of the information panel does not exist, return and do nothing.
        if (m_isPrimaryBPressedTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the IsLeftPrimaryButtonPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the primary button press label of this information panel.
            m_isPrimaryBPressedTxt.text = m_controllerInfo.IsLeftPrimaryButtonPressed.ToString();
        }
        else
        {
            // Get access to the IsRightPrimaryButtonPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the primary button press label of this information panel.
            m_isPrimaryBPressedTxt.text = m_controllerInfo.IsRightPrimaryButtonPressed.ToString();
        }
    }


    /**
    *  Function to request, store and display the current secondary button information
    */
    private void setIsSecondaryBPresed()
    {
        // If the secondary button pressed label of the information panel does not exist, return and do nothing.
        if (m_isSecondaryBPressedTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the IsLeftSecondaryButtonPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the secondary button press label of this information panel.
            m_isSecondaryBPressedTxt.text = m_controllerInfo.IsLeftSecondaryButtonPressed.ToString();
        }
        else
        {
            // Get access to the IsRightSecondaryButtonPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the secondary button press label of this information panel.
            m_isSecondaryBPressedTxt.text = m_controllerInfo.IsRightSecondaryButtonPressed.ToString();
        }
    }


    /**
    *  Function to request, store and display the current thumbstick button press information
    */
    private void setIsThumbStickPresed()
    {
        // If the thumbstick pressed label of the information panel does not exist, return and do nothing.
        if (m_isThumbStickPressedTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the IsLeftThumbStickPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the thumbstick button press label of this information panel.
            m_isThumbStickPressedTxt.text = m_controllerInfo.IsLeftThumbStickPressed.ToString();
        }
        else
        {
            // Get access to the IsRightThumbStickPressed variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the thumbstick button press label of this information panel.
            m_isThumbStickPressedTxt.text = m_controllerInfo.IsRightThumbStickPressed.ToString();
        }
    }


    /**
    *  Function to request, store and display the current thumbstick button touch information
    */
    private void setIsThumbStickTouched()
    {
        // If the thumbstick touched label of the information panel does not exist, return and do nothing.
        if (m_isThumbStickTouchedTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the IsLeftThumbStickTouched variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the thumbstick button touch label of this information panel.
            m_isThumbStickTouchedTxt.text = m_controllerInfo.IsLeftThumbStickTouched.ToString();
        }
        else
        {
            // Get access to the IsRightThumbStickTouched variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the thumbstick button touch label of this information panel.
            m_isThumbStickTouchedTxt.text = m_controllerInfo.IsRightThumbStickTouched.ToString();
        }
    }

    /**
    *  Function to request, store and display the current thumbstick axis value  information
    */
    private void setCurrentThumbStickAxisValue()
    {
        // If the thumbstick axis label of the information panel does not exist, return and do nothing.
        if (m_thumbStickAxisValueTxt == null)
        {
            return;
        }

        // Evaluate if we want to store the left or right controller information
        if (bIsLeftController)
        {
            // Get access to the LeftControllerThumbStickAxis variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the thumbstick axis label of this information panel.
            m_thumbStickAxisValueTxt.text = m_controllerInfo.LeftControllerThumbStickAxis.ToString();
        }
        else
        {
            // Get access to the RightControllerThumbStickAxis variable from the m_controllerInfo script.
            // Convert its value to a string and store it in the text variable of the thumbstick axis label of this information panel.
            m_thumbStickAxisValueTxt.text = m_controllerInfo.RightControllerThumbStickAxis.ToString();
        }
    }


}
