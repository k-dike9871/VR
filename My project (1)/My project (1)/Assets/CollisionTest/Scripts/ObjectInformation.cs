using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;    // Library needed for high quality text in unity

public class ObjectInformation : MonoBehaviour
{
    // Editor set reference to the text label
    public TextMeshPro m_objectLabelText;


    /**
     *  Editor set reference to a colro variable linked to this script.
     */ 
    public Color m_objectColor;

    /**
     *  Reference to the renderer of the game object attached to this script
     */ 
    private Renderer m_objectRenderer;

    /**
    *  Reference to the material of the game object attached to this script
    */
    private Material m_objectMaterial;

    /**
     *  Function to change the text of the object label
     *  @param strTxt  A string value input to feed the text label
     */
    public void setObjectLabel(string strTxt)
    {
        // If the object label does not exist
        if(m_objectLabelText == null)
        {
            return;
        }

        m_objectLabelText.text = strTxt;

    }

    public void Start()
    {
        setInitialVariables();
    }


    public void setInitialVariables()
    {
        // Store a reference of the renderer of the game object attached to this script
        m_objectRenderer = this.gameObject.GetComponent<Renderer>();


        // If the renderer exist, attempt to store a reference to the material of the game object attached to this script.
        if(m_objectRenderer != null)
        {
            m_objectMaterial = m_objectRenderer.material;
        }
    }

    /**
    *  Function to change the text of the object label
    *  @param aColor  A color to change the main material
    */
    public void setObjectColor(Color aColor)
    {

        // If the object material does not exist, return and do nothing.
        if(m_objectMaterial == null)
        {
            return;
        }

        // If we reached this stage, the material of the game object exist,
        // We can now change its color.
        m_objectMaterial.color = aColor;

    }


    /**
    *  Function to change the color of the object to be the one set in editor
    *  Notice how this function does not contain input parameters. 
    */
    public void setObjectColor()
    {

        // If the object material does not exist, return and do nothing.
        if (m_objectMaterial == null)
        {
            return;
        }

        // If we reached this stage, the material of the game object exist,
        // We can now change its color.
        m_objectMaterial.color = m_objectColor;

    }


    public void OnCollisionEnter(Collision collision)
    {
        setObjectColor(Color.blue);
    }

    public void OnCollisionExit(Collision collision)
    {
        setObjectColor(Color.white);
    }

    public void OnTriggerEnter(Collider other)
    {
        setObjectColor(Color.green);
    }

    public void OnTriggerExit(Collider other)
    {
        setObjectColor(Color.white);
    }
}
