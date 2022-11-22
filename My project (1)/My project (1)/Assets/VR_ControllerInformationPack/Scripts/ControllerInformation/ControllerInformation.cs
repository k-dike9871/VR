#region HEADER BLOCK
/**
 * @brief		File containing ControllerInformation class definition
 * @details		The ControllerInformation class is responsible for storing information from the available XR Input controllers
 * @author		Mario Bagnoli
 * @date		First created: 22/10/2022
 */
#endregion

using System;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.InputSystem;

public class ControllerInformation : MonoBehaviour
{

    #region InternalMemberVariables


    //////////////////////////////////////////
    /// Controller State
    /////////////////////////////////////////

    /**
     * The left controller (if available)
     */
    private UnityEngine.XR.InputDevice m_leftController;

    /**
     * The right controller (if available)
     */
    private UnityEngine.XR.InputDevice m_rightController;


    /**
     * Vector3 to hold the world coordinates of the right controller
     */
    private Vector3 m_rightControllerPosition;

    /**
     * Public getter for m_rightControllerPosition
     */
    public Vector3 RightControllerPosition
    {
        get
        {
            return m_rightControllerPosition;
        }
    }

    /**
     * Vector3 to hold the world coordinates of the left controller
     */
    private Vector3 m_leftControllerPosition;


    /**
     * Public getter for m_leftControllerPosition
     */
    public Vector3 LeftControllerPosition
    {
        get
        {
            return m_leftControllerPosition;
        }
    }

    /**
     * Vector3 to hold the orientation of the right controller
     */
    private Vector3 m_rightControllerOrientation;

    /**
     * Public getter for m_rightControllerOrientation
     */
    public Vector3 RightControllerOrientation
    {
        get
        {
            return m_rightControllerOrientation;
        }
    }

    /**
     * Vector3 to hold the world coordinates of the left controller
     */
    private Vector3 m_leftControllerOrientation;


    /**
     * Public getter for m_leftControllerOrientation
     */
    public Vector3 LeftControllerOrientation
    {
        get
        {
            return m_leftControllerOrientation;
        }
    }

    /**
     * Vector3 to hold velocity of the right controller
     */
    private Vector3 m_rightControllerVelocity;

    /**
     * Public getter for m_rightControllerVelocity
     */
    public Vector3 RightControllerVelocity
    {
        get
        {
            return m_rightControllerVelocity;
        }
    }

    /**
     * Vector3 to hold velocity of the left controller
     */
    private Vector3 m_leftControllerVelocity;


    /**
     * Public getter for m_leftControllerVelocity
     */
    public Vector3 LeftControllerVelocity
    {
        get
        {
            return m_leftControllerVelocity;
        }
    }

    //////////////////////////////////////////
    /// Button press state
    /////////////////////////////////////////

    /**
     *  Float value to store the current grip pressure of the left controller
     */
    private float m_fLeftControllerGrip;


    /**
     * Public getter for m_leftControllerVelocity
     */
    public float LeftControllerGrip
    {
        get
        {
            return m_fLeftControllerGrip;
        }
    }

    /**
    *  Float value to store the current grip pressure of the rigth controller
    */
    private float m_fRigthControllerGrip;


    /**
     * Public getter for m_fRigthControllerGrip
     */
    public float RigthControllerGrip
    {
        get
        {
            return m_fRigthControllerGrip;
        }
    }


    /**
     *  Bool to flag the current grip state of the left controller
     */

    private bool m_bIsLeftGripPressed;

    /**
     *  Getter for m_bIsLeftGripPressed
     */
    public bool IsLeftGripPressed
    {
        get
        {
            return m_bIsLeftGripPressed;
        }
    }

    /**
    *  Bool to flag the current grip state of the right controller
    */

    private bool m_bIsRigthGripPressed;

    /**
     *  Getter for m_bIsRightGripPressed
     */
    public bool IsRightGripPressed
    {
        get
        {
            return m_bIsRigthGripPressed;
        }
    }

    /**
    *  Bool to flag the current primary button state of the left controller
    */

    private bool m_bIsLeftPrimaryButtonPressed;

    /**
     *  Getter for m_bIsLeftPrimaryButtonPressed
     */
    public bool IsLeftPrimaryButtonPressed
    {
        get
        {
            return m_bIsLeftPrimaryButtonPressed;
        }
    }

    /**
    *  Bool to flag the current secondary button state of the left controller
    */

    private bool m_bIsLeftSecondaryButtonPressed;

    /**
     *  Getter for m_bIsLeftSecondaryButtonPressed
     */
    public bool IsLeftSecondaryButtonPressed
    {
        get
        {
            return m_bIsLeftSecondaryButtonPressed;
        }
    }

    /**
*  Bool to flag the current primary button state of the right controller
*/

    private bool m_bIsRightPrimaryButtonPressed;

    /**
     *  Getter for m_bIsRightPrimaryButtonPressed
     */
    public bool IsRightPrimaryButtonPressed
    {
        get
        {
            return m_bIsRightPrimaryButtonPressed;
        }
    }

    /**
    *  Bool to flag the current secondary button state of the right controller
    */

    private bool m_bIsRightSecondaryButtonPressed; 

    /**
     *  Getter for m_bIsRightScondaryButtonPressed
     */
    public bool IsRightSecondaryButtonPressed
    {
        get
        {
            return m_bIsRightSecondaryButtonPressed;
        }
    }


    /**
    *  Float value to store the current trigger pressure of the left controller
    */
    private float m_fLeftControllerTriggerPressure;


    /**
     * Public getter for m_fLeftControllerTriggerPressure
     */
    public float LeftControllerTriggerPressure
    {
        get
        {
            return m_fLeftControllerTriggerPressure;
        }
    }

    /**
    *  Float value to store the current trigger pressure of the rigth controller
    */
    private float m_fRigthControllerTriggerPressure;


    /**
     * Public getter for m_fRigthControllerTriggerPressure
     */
    public float RigthControllerTriggerPressure
    {
        get
        {
            return m_fRigthControllerTriggerPressure;
        }
    }


    /**
     *  Bool to flag the current trigger button state of the left controller
     */

    private bool m_bIsLeftTriggerPressed;

    /**
     *  Getter for m_bIsLeftTriggerPressed
     */
    public bool IsLeftTriggerPressed
    {
        get
        {
            return m_bIsLeftTriggerPressed;
        }
    }

    /**
    *  Bool to flag the current trigger button state of the right controller
    */

    private bool m_bIsRigthTriggerPressed;

    /**
     *  Getter for m_bIsRigthTriggerPressed
     */
    public bool IsRightTriggerPressed
    {
        get
        {
            return m_bIsRigthTriggerPressed;
        }
    }



    /**
    *  Bool to flag the current thumbstick button state of the left controller
    */

    private bool m_bIsLeftThumbStickPressed;

    /**
     *  Getter for m_bIsLeftThumbStickPressed
     */
    public bool IsLeftThumbStickPressed
    {
        get
        {
            return m_bIsLeftThumbStickPressed;
        }
    }

    /**
    *  Bool to flag the current thumbStick button state of the right controller
    */

    private bool m_bIsRightThumbStickPressed;

    /**
     *  Getter for m_bIsRightThumbStickPressed
     */
    public bool IsRightThumbStickPressed
    {
        get
        {
            return m_bIsRightThumbStickPressed;
        }
    }




    /**
    *  Bool to flag the current thumbstick button touch state of the left controller
    */

    private bool m_bIsLeftThumbStickTouched;

    /**
     *  Getter for m_bIsLeftThumbStickTouched
     */
    public bool IsLeftThumbStickTouched
    {
        get
        {
            return m_bIsLeftThumbStickTouched;
        }
    }

    /**
    *  Bool to flag the current thumbStick button touch state of the right controller
    */

    private bool m_bIsRightThumbStickTouched;

    /**
     *  Getter for m_bIsRightThumbStickTouched
     */
    public bool IsRightThumbStickTouched
    {
        get
        {
            return m_bIsRightThumbStickTouched;
        }
    }



    //////////////////////////////////////////
    /// ThumbStick Axis State
    /////////////////////////////////////////

    /**
     *  Vector2 holding the current state of the left controlelr thumbstick
     */

    private Vector2 m_leftControllerThumbStickAxis;

    /**
     *  Public getter for m_leftControllerThumbStickAxis
     */
    public Vector2 LeftControllerThumbStickAxis
    {
        get
        {
            return m_leftControllerThumbStickAxis;
        }
    }

    /**
    *  Vector2 holding the current state of the right controller thumbstick
    */

    private Vector2 m_rightControllerThumbStickAxis;

    /**
     *  Public getter for m_rightControllerThumbStickAxis
     */
    public Vector2 RightControllerThumbStickAxis
    {
        get
        {
            return m_rightControllerThumbStickAxis;
        }
    }


    #endregion InternalMemberVariables


    /**
     *  Function that happens on every game frame
     */
    private void Update()
    {
        setControllers();
        storeControllersParameters();
    }

    /**
     *  Function to evaluate the current controllers on the scene and collect their state
     */ 
    private void setControllers()
    {
        m_leftController = InputDevices.GetDeviceAtXRNode(XRNode.LeftHand);
        m_rightController = InputDevices.GetDeviceAtXRNode(XRNode.RightHand);
    }


    /**
     * Function to to the controller state and button pressed information.
     */
    private void storeControllersParameters()
    {
        // Evalutate if the left controller exist, if so, store  its information
        if (m_leftController != null)
        {
            // Controller state
            m_leftControllerPosition            = getControllerPosition(m_leftController);
            m_leftControllerOrientation         = getControllerOrientation(m_leftController);
            m_leftControllerVelocity            = getControllerVelocity(m_leftController);
            
            // Button press state
            m_fLeftControllerGrip               = getControllerGrip(m_leftController);
            m_bIsLeftGripPressed                = isGripPressed(m_leftController);
            m_fLeftControllerTriggerPressure    = getControllerTrigger(m_leftController);
            m_bIsLeftTriggerPressed             = isTriggerPressed(m_leftController);
            m_bIsLeftPrimaryButtonPressed       = isPrimaryButtonPressed(m_leftController);
            m_bIsLeftSecondaryButtonPressed     = isSecondaryButtonPressed(m_leftController);
            m_bIsLeftThumbStickPressed          = isThumbStickPressed(m_leftController);
            m_bIsLeftThumbStickTouched          = isThumbStickTouched(m_leftController);

            // ThumbStick Axis
            m_leftControllerThumbStickAxis      = getThumbStickAxis(m_leftController);

        }

        // Evalutate if the right controller exist, if so, store  its information
        if (m_rightController != null)
        {
            // Controller state
            m_rightControllerPosition           = getControllerPosition(m_rightController);
            m_rightControllerOrientation        = getControllerOrientation(m_rightController);
            m_rightControllerVelocity           = getControllerVelocity(m_rightController);

            // Button press state
            m_fRigthControllerGrip              = getControllerGrip(m_rightController);
            m_bIsRigthGripPressed               = isGripPressed(m_rightController);
            m_fRigthControllerTriggerPressure   = getControllerTrigger(m_rightController);
            m_bIsRigthTriggerPressed            = isTriggerPressed(m_rightController);
            m_bIsRightPrimaryButtonPressed      = isPrimaryButtonPressed(m_rightController);
            m_bIsRightSecondaryButtonPressed    = isSecondaryButtonPressed(m_rightController);
            m_bIsRightThumbStickPressed         = isThumbStickPressed(m_rightController);
            m_bIsRightThumbStickTouched         = isThumbStickTouched(m_rightController);

            // Thumbstick Axis
            m_rightControllerThumbStickAxis     = getThumbStickAxis(m_rightController);
        }

    }

    #region PositionOrientationVelocity

    /**
    * Function to extract the velocity of a provided XR input device
    * 
    * @param   aXRInputDevice           An XR input device (I.E A VR controller)
    * @return  controllerPosition       A vector3 that holds the current position of the provided XR input device
    */
    private Vector3 getControllerPosition(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        Vector3 controllerPosition;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.devicePosition, out controllerPosition);
        return controllerPosition;
    }


    /**
     * Function to extract the orientation of a provided XR input device
     * 
     * @param   aXRInputDevice          An XR input device (I.E A VR controller)
     * @return  controllerOrientation   A vector3 that holds the current orientation of the provided XR input device
     */
    private Vector3 getControllerOrientation(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        Vector3 controllerOrientation;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.deviceRotation, out Quaternion rotation);
        controllerOrientation = rotation.eulerAngles;
        return controllerOrientation;
    }


    /**
    * Function to extract the velocity of a provided XR input device
    * 
    * @param   aXRInputDevice           An XR input device (I.E A VR controller)
    * @return  controllerVelocity       A vector3 that holds the current velocity of the provided XR input device
    */
    private Vector3 getControllerVelocity(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        Vector3 controllerVelocity;
        bool bInformationAvailable  = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.deviceVelocity, out controllerVelocity);
        return controllerVelocity;
    }

    #endregion PositionOrientationVelocity


    #region ButtonPress

    /**
    * Function to extract the pressure grip of a provided XR input device
    * 
    * @param   aXRInputDevice           An XR input device (I.E A VR controller)
    * @return  fCurrentGripValue        A float that holds the current pressure on the grip of the provided XR input device
    */
    private float getControllerGrip(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        float fCurrentGripValue;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.grip, out fCurrentGripValue);
        return fCurrentGripValue;
    }

    /**
    * Function to check if the grip of the provided XR input is pressed
    * Note: This function only returns true if the XR Input grip is fully pressed.
    * 
    * @param   aXRInputDevice           An XR input device (I.E A VR controller)
    * @return  fCurrentGrip             true:   The current grip is fully pressed
    *                                   false:  The current grip is not fully pressed
    *                                   
    */
    private bool isGripPressed(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        bool bIsGripPressed;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.gripButton, out bIsGripPressed);
        return bIsGripPressed;
    }


    /**
    * Function to extract the pressure grip of a provided XR input device
    * 
    * @param   aXRInputDevice           An XR input device (I.E A VR controller)
    * @return  fCurrentTriggerValue     A float that holds the current pressure on the trigger of the provided XR input device
    */
    private float getControllerTrigger(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        float fCurrentTriggerValue;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.trigger, out fCurrentTriggerValue);
        return fCurrentTriggerValue;
    }

    /**
    * Function to check if the trigger of the provided XR input is pressed
    * Note: This function only returns true if the XR Input trigger is fully pressed.
    * 
    * @param   aXRInputDevice           An XR input device (I.E A VR controller)
    * @return  bIsTriggerPressed        true:   The current trigger is fully pressed
    *                                   false:  The current trigger is not fully pressed
    *                                   
    */
    private bool isTriggerPressed(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        bool bIsTriggerPressed;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.triggerButton, out bIsTriggerPressed);
        return bIsTriggerPressed;
    }


    /**
    * Function to check if the primary button of the provided XR input is pressed
    * 
    * @param   aXRInputDevice           An XR input device (I.E A VR controller)
    * @return  bIsPrimaryButtonPressed  true:   The current primary button is pressed
    *                                   false:  The current primary button is not pressed
    *                                   
    */
    private bool isPrimaryButtonPressed(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        bool bIsPrimaryButtonPressed;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primaryButton, out bIsPrimaryButtonPressed);
        return bIsPrimaryButtonPressed;
    }

    /**
    * Function to check if the secondary button of the provided XR input is pressed
    * 
    * @param   aXRInputDevice               An XR input device (I.E A VR controller)
    * @return  bIsSecondaryButtonPressed    true:   The current secondary button is pressed
    *                                       false:  The current secondary button is not pressed
    *                                   
    */
    private bool isSecondaryButtonPressed(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        bool bIsSecondaryButtonPressed;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.secondaryButton, out bIsSecondaryButtonPressed);
        return bIsSecondaryButtonPressed;
    }


    /**
    * Function to check if the secondary button of the provided XR input is pressed
    * 
    * @param   aXRInputDevice               An XR input device (I.E A VR controller)
    * @return  bIsThumbStickPressed    true:   The current thumbStick button is pressed
    *                                       false:  The current thumbStick button is not pressed                                
    */
    private bool isThumbStickPressed(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        bool bIsThumbStickPressed;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primary2DAxisClick, out bIsThumbStickPressed);
        return bIsThumbStickPressed;
    }

    /**
    * MB NOTE: Not sure if this one works for the Oculus Quest2
    * Function to check if the secondary button of the provided XR input is pressed
    * 
    * @param   aXRInputDevice               An XR input device (I.E A VR controller)
    * @return  bIsThumbStickTouched         true:   The current thumbStick button is touched
    *                                       false:  The current thumbStick button is not touched                                
    */
    private bool isThumbStickTouched(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        bool bIsThumbStickTouched;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primary2DAxisTouch, out bIsThumbStickTouched);
        return bIsThumbStickTouched;
    }



    #endregion ButtonPress


    #region ControllerThumbstickAxis

    /**
    * Function to check if the secondary button of the provided XR input is pressed
    * 
    * @param   aXRInputDevice               An XR input device (I.E A VR controller)
    * @return  thumbstickAxisValues         A Vector2 holding the current (x,y) values of the primary thumbstick of the current XR Input
    *                                   
    */
    private Vector2 getThumbStickAxis(UnityEngine.XR.InputDevice aXRInputDevice)
    {
        Vector2 thumbstickAxisValues;
        bool bInformationAvailable = aXRInputDevice.TryGetFeatureValue(UnityEngine.XR.CommonUsages.primary2DAxis, out thumbstickAxisValues);
        return thumbstickAxisValues;
    }
    #endregion ControllerThumbstickAxis

}