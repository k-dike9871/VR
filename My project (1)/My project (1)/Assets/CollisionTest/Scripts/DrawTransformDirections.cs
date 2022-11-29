using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrawTransformDirections : MonoBehaviour
{
    // Start is called before the first frame update

    public bool m_bDrawTransformUp;
    public bool m_bDrawTransformForward;
    public bool m_bDrawTransformRight;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        drawObjectTransforms();
    }


    private void drawObjectTransforms()
    {
        if(m_bDrawTransformUp)
        {
            drawDirection(transform.up, Color.green);
        }

        if (m_bDrawTransformRight)
        {
            drawDirection(transform.right, Color.red);
        }

        if (m_bDrawTransformForward)
        {
            drawDirection(transform.forward, Color.blue);
        }
    }

    private void drawDirection(Vector3 direction, Color aColor)
    {
        Debug.DrawRay(this.transform.position, direction * 2, aColor);
    }
}
