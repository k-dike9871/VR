using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[System.Serializable]
public class Haptic
{
    #region Variable Declarations
    [Range(0, 1)]
    public float intensity;
    public float duration;
    #endregion

    public void TriggerHaptic(BaseInteractionEventArgs eventArgs)
    {
        if (eventArgs.interactorObject is XRBaseControllerInteractor controllerInteractor)
        {
            TriggerHaptic(controllerInteractor.xrController);
        }
    }

    public void TriggerHaptic(XRBaseController controller)
    {
        if (intensity > 0)
            controller.SendHapticImpulse(intensity, duration);
    }
}
public class HapticInteractor : MonoBehaviour
{
    //Interactor haptic events
    public Haptic hapticOnActivated;
    public Haptic hapticHoverEntered;
    public Haptic hapticHoverExited;
    public Haptic hapticSelectEntered;
    public Haptic hapticSelectExited;

    // Start is called before the first frame update
    void Start()
    {
        //Can trigger haptics based on different interaction types with objects
        XRBaseInteractable interactable = GetComponent<XRBaseInteractable>();
        interactable.activated.AddListener(hapticOnActivated.TriggerHaptic);

        interactable.hoverEntered.AddListener(hapticHoverEntered.TriggerHaptic);
        interactable.hoverExited.AddListener(hapticHoverExited.TriggerHaptic);
        interactable.selectEntered.AddListener(hapticSelectEntered.TriggerHaptic);
        interactable.selectExited.AddListener(hapticSelectExited.TriggerHaptic);

    }
}
