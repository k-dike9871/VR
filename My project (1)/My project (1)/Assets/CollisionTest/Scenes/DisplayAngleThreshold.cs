using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayAngleThreshold : MonoBehaviour
{

    // Start is called before the first frame update

    /**
     * Editor set reference to the text label
     */
    public TMPro.TextMeshPro m_angleThresholdLabel;

    /**
     * Editor set reference for the snapObjectScript (Used only to display information).
     */ 
    public SnapObject m_snapObjectScript;


    // Update is called once per frame
    void Update()
    {
        displayAngleSnapThreshold();
    }

    private void displayAngleSnapThreshold()
    {
        if( (m_snapObjectScript == null) || (m_angleThresholdLabel == null))
        {
            return;
        }

        m_angleThresholdLabel.text = m_snapObjectScript.m_fAngleThreshold.ToString();

    }

}
