using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class DisplayObjectScale : MonoBehaviour
{
    // Start is called before the first frame update

    // Editor set reference to the text label
    public TextMeshPro m_objectScaleLabelText;

    // Editor set reference to the text label
    public TextMeshPro m_objectBoundsLabelText;

    // Reference to the object renderer (Needed to extract the bounds information)
    private Renderer m_objectRenderer;

    // Vector3 to hold the current object scale information.
    private Vector3 m_objectScale;

    // Vector3 to hold the current bounds size information.
    private Vector3 m_objectBounds;


    void Start()
    {
        initialise();
    }


    private void initialise()
    {
        setObjectRenderer();
    }

    private void setObjectRenderer()
    {
        if(this.gameObject.GetComponent<Renderer>() == null)
        {
            return;
        }

        else
        {
            m_objectRenderer = this.gameObject.GetComponent<Renderer>();
        }
    }

    // Update is called once per frame
    void Update()
    {
        setObjectInformation();
    }


    /**
     *  Function to store the information of the current object.
     */ 
    private void setObjectInformation()
    {
        // Store the global scale value .
        // Note: transform.localScale IS PARENTING related.  It is relative to the parent of the current object.
        // If you want to know the local scale of the object use this.transform.localScale
        m_objectScale = this.transform.lossyScale;

        if(m_objectRenderer != null)
        {
            m_objectBounds = m_objectRenderer.bounds.size;
        }

        // Trigger the dis-play of information.
        displayObjectInfo();
    }


    /**
     *  Function that triggers the display of information.
     */ 
    private void displayObjectInfo()
    {
        // Display the object scale information
        setTextInLabel(m_objectScaleLabelText, m_objectScale.ToString());

        // Display the objectr bounds information
        setTextInLabel(m_objectBoundsLabelText, m_objectBounds.ToString());
    }


    /**
     * Global function to assign a provided string to a provided text mesh pro object
     * 
     * @param aTMPLabel     TextMeshPro object to display a message
     * @param strMessage    String holding the desired message to display.
     */
    private void setTextInLabel(TextMeshPro aTMPLabel, string strMessage)
    {
        if(aTMPLabel == null)
        {
            return;
        }

        aTMPLabel.text = strMessage;

    }
}
