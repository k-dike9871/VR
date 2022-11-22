using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartBeatScale : MonoBehaviour
{
    // Editor set value for the heartbeat  speed.
    public float m_fHeartBeatSpeed;

    // Update is called once per frame
    void Update()
    {
        scaleObjectOverTime();
    }

    /**
     *  Scale the object over time.
     */ 
    private void scaleObjectOverTime()
    {
        // Mathf.Sin  will return a value from -1 to 1.
        // Time.time is how long the game has been running. It is an ever increasing value 
        // Mathf.Abs returns the absolute value of a number. Absolute value is always the positive version of a number.
        // I am multiplying Time.time  by a speed factor. The higher the speed number the faster the obejct will beat.
        // I would recommend a m_fHeartBeatSpeed value of 0.5f for a nice and slow effect.
        this.transform.localScale = Vector3.one * Mathf.Abs(Mathf.Sin(Time.time * m_fHeartBeatSpeed) );
    }
}
