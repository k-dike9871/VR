using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

public class SnapObject : MonoBehaviour
{

    /**
     *  Public enumeration that defines types of snapping.
     */ 
    public enum ObjectSnapType
    {
        OST_SIMPLE_POSITION,                        // This will snap positon only
        OST_SIMPLE_POSITION_ROTATION,               // This will snap both positions and rotation.                     
        OST_ANGLE_POSITION_ROTATION                 // This will snap both position and rotation only if we have similar angles.
                                                    // (I.E this object rotation is similar to the object to snap)
    }


    /**
     * Editor set snap type of the current object.
     */
    public ObjectSnapType m_snapType = ObjectSnapType.OST_SIMPLE_POSITION;


    /**
     *  Editor set Flag to determine if we want to disable rigidbody on snap collision.
     */ 
    public bool m_bDisablePhysicsOnCollision;

    /**
     *  Reference to the rigidbody of the game object attached to this script
     */ 
    private Rigidbody m_objectRigidBody;

    /**
     *  Private reference to the obejct material
     */ 
    private Material m_objectMaterial;

    /**
    *  Editor set float that give the angle threshold to trigger the snap.
    */
    public float m_fAngleThreshold;

    /**
    *  Editor set Flag to determine if we want to perform snap by comparing object ID.
    */
    public bool m_bSnapToID;


    /**
    *  Editor set Flag to determine if we want to completly remove the rigidbody after snapping.
    */
    public bool m_bRemoveRigidbodyOnSnap;

    // Start is called before the first frame update
    void Start()
    {
        initialise();
    }

    /**
     *  Internal function that initialise our script.
     */ 
    private void initialise()
    {
        setInitialVariables();
    }


    /**
     *  Set the initial variables for this script.
     */ 
    private void setInitialVariables()
    {
        // Store a reference for the rigidbody of this object.
        m_objectRigidBody = this.GetComponent<Rigidbody>();
        // Store a reference for the material of this object.
        m_objectMaterial = this.GetComponent<Renderer>().material;
    }


    /**
     *  Function that gets called on trigger enter.
     */ 
    public void OnTriggerEnter(Collider other)
    {
       // Store an internal reference of the colliding object.
        GameObject objectToSnap = other.gameObject;

        // If the colliding object does not exist, do nothing.
        if (objectToSnap == null)
        {
            return;
        }

        // Evaluate if we want to perform the snap by ID.
        if(m_bSnapToID)
        {
            // If we reach this point, user wants to perform snap by ID.

            // Store reference for the ObjectID script of the colliding object.
            ObjectID objectToSnapID = objectToSnap.GetComponent<ObjectID>();

            // Store reference for the ObjectID script of this object.
            ObjectID thisObjectID = this.GetComponent<ObjectID>();

            // If either this or the colliding object do not has an ObjectID script, return and do nothing.
            if ( (objectToSnapID == null) || (thisObjectID ==null))
            {
                return;
            }

            // If we reach this, evaluate if this object ID matches with the colliding object ID.
            if(objectToSnapID.m_strObjectID != thisObjectID.m_strObjectID)
            {
                return;
            }
        }


        /// Evaluate which type of snapping action we want to perform.
        switch(m_snapType)
        {
            case ObjectSnapType.OST_SIMPLE_POSITION:

                // Snap this object with the colliding object.
                // Snap position: true,
                // Snap rotation: false,
                // Disable editor selection: true;
                snapObjects(this.gameObject, objectToSnap, true, false, true);
                break;
            case ObjectSnapType.OST_SIMPLE_POSITION_ROTATION:

                // Snap this object with the colliding object.
                // Snap position: true,
                // Snap rotation: true,
                // Disable editor selection: true;
                snapObjects(this.gameObject, objectToSnap, true, true, true);
                break;
        }   
    }


    /**
     *  This function gets called on every frame this object is colliding with another game obeject trigger.
     */ 
    public void OnTriggerStay(Collider other)
    {
        // Store an internal reference of the colliding object.
        GameObject objectToSnap = other.gameObject;

        // If the colliding object does not exist, do nothing.
        if (objectToSnap == null)
        {
            return;
        }

        // Evaluate if we want to perform the snap by ID.
        if (m_bSnapToID)
        {
            // If we reach this point, user wants to perform snap by ID.

            // Store reference for the ObjectID script of the colliding object.
            ObjectID objectToSnapID = objectToSnap.GetComponent<ObjectID>();

            // Store reference for the ObjectID script of this object.
            ObjectID thisObjectID = this.GetComponent<ObjectID>();

            // If either this or the colliding object do not has an ObjectID script, return and do nothing.
            if ((objectToSnapID == null) || (thisObjectID == null))
            {
                return;
            }

            // If we reach this, evaluate if this object ID matches with the colliding object ID.
            if (objectToSnapID.m_strObjectID != thisObjectID.m_strObjectID)
            {
                return;
            }
        }

        // Evaluate snap type
        switch (m_snapType)
        {
            case ObjectSnapType.OST_ANGLE_POSITION_ROTATION:
                // Evaluate if the orientation of this object matches the orientation of the colliding object
                if (doRotationMatch(objectToSnap))
                {
                    // Snap this object with the colliding object.
                    // Snap position: true,
                    // Snap rotation: true,
                    // Disable editor selection: true;
                    snapObjects(this.gameObject, objectToSnap, true, true, false);
                }
                else
                {
                    setObjectColor(Color.white);
                }
                break;
        }
    }


    /**
    * Function that performs snaps an object to another
    * @param objectA                   The desired object to be snapped.
    * @param objectB                   The object where are going to snap to.
    * @param bSnapPosition             Flag to snap the position of the object
    *                                      true:  objectA will copy the transform position of objectB
    *                                      false: objectA will not copy the transform position of objectB
    * @param bSnapRotation             Flag to snap the orientation of the object
    *                                      true:  objectA will copy the transform eulerAngles of objectB
    *                                      false: objectA will NOT copy the transform eulerAngles of objectB
    *                          
    * @param bDisableEditorSelection   Flag to enable/disable unity editor obejct selection
    *                                      true:  Unity editor will clear user object selection
    *                                      false: Unity editor will NOT clear user object selection
    */
    private void snapObjects(GameObject objectA, GameObject objectB, bool bSnapPosition, bool bSnapRotation, bool bDisableEditorSelection)
    {
        // If we want to snap position
        if (bSnapPosition)
        {
            //objectA will copy the transform position of objectB
            objectA.transform.position = objectB.transform.position;
        }

        // If we want to snap orientation
        if (bSnapRotation)
        {
            //objectA will copy the transform eulerAngles of objectB
            objectA.transform.eulerAngles = objectB.transform.eulerAngles;
        }

        // If we want to disable editor user selection
        if (bDisableEditorSelection)
        {
            //Unity editor will clear user object selection
            Selection.objects = null;
        }


        // Enable/disable this object physic.
        togglePhysics(m_bDisablePhysicsOnCollision);

        // Change the color of this object to be blue
        setObjectColor(Color.blue);
    }


    /**
     *  Function to determinate if this object roation matches the rotation of a provided gameobject using a provided threshold
     *  @param objectToSnap         The desired game obejct to compare rotation
     *  
     *  @return bRotationMatch   Flag that tell us if this game object rotation matches the provided game object rotation
     *                                      true:  Unity editor will clear user object selection
     *                                      false: Unity editor will NOT clear user object selection
     */
    public bool doRotationMatch(GameObject objectToSnap)
    {
        bool bRotationMatch = false;

        // Evaluate if this object transform.forward matches the objectToSnap transform.forward (within a provided angle threshold)
        bool bForwardMatch  = doVectorsMatchWithinThreshold(this.transform.forward, objectToSnap.transform.forward, m_fAngleThreshold);

        // Evaluate if this object transform.right matches the objectToSnap transform.right (within a provided angle threshold)
        bool bRightMatch    = doVectorsMatchWithinThreshold(this.transform.right, objectToSnap.transform.right, m_fAngleThreshold); 

        // If both forward and rigth vectors of this and the objectToSnap match, we can assume they share similar orientation/rotation.
        if( (bForwardMatch) && (bRightMatch))
        {
            bRotationMatch = true;
        }

        return bRotationMatch;
    }


    /**
     *  Function to determinate if two vectors are pointing towards the same direction (with an acceptable angle threshold)
     *  This function evaluates the angle difference between each vector using the worlds rigth, up and forwards as axis to compare.
     *  
     *  @param  VectorA             Vector3 holding the first vector to compare
     *  @param  VectorB             Vector3 holding the second vector to compare
     *  @param  fAngleThreshold     Float value holding the desired numerical value to use as "similarity" comparisson between two angles.
     *  
     *  @return bAxisMatch          True:  Both vectors are pointing towards the same direction (withing a provided angle threshold) 
     *                              False: Vectors are NOT pointing towards the same direction (withing a provided angle threshold) 
     */
    private bool doVectorsMatchWithinThreshold(Vector3 vectorA, Vector3 vectorB, float fAngleThreshold)
    {
        bool bAxisMatch = false;
        
        // Store the angle difference between the vectors against the worlds RIGHT axis.
        float fAngleDifferenceOnX = Mathf.Abs(Vector3.SignedAngle(vectorA, vectorB, Vector3.right));
        // Store the angle difference between the vectors against the worlds UP axis.
        float fAngleDifferenceOnY = Mathf.Abs(Vector3.SignedAngle(vectorA, vectorB, Vector3.up));
        // Store the angle difference between the vectors against the worlds FORWARD axis.
        float fAngleDifferenceOnZ = Mathf.Abs(Vector3.SignedAngle(vectorA, vectorB, Vector3.forward));

        Vector3 angleDifferenceVector = new Vector3(fAngleDifferenceOnX, fAngleDifferenceOnY, fAngleDifferenceOnZ);

        Debug.Log("angleDifferenceVector is " + angleDifferenceVector);

        // Evaluate the angle difference against our desired angle threshold.
        // If all of the angle differences are lower than our desired threshold, the vecotrs should be roughly similar
        // Remember, the similarity would be defined by the provided angle fAngleThreshold
        if ((fAngleDifferenceOnX < fAngleThreshold) && (fAngleDifferenceOnY < fAngleThreshold) && (fAngleDifferenceOnZ < fAngleThreshold))
        {
            bAxisMatch = true;
        }
        return bAxisMatch;
    }


    /**
     *  Function to set a desired color to the object attached to this script.
     */ 
    private void setObjectColor(Color aColor)
    {
        if(m_objectMaterial == null)
        {
            return;
        }

        m_objectMaterial.color = aColor;
    }

    public void OnTriggerExit(Collider other)
    {
        if(!m_bDisablePhysicsOnCollision)
        {
            toggleRigidbody(true);
           
        }
        setObjectColor(Color.white);
    }

    private void togglePhysics(bool bDisablePhysicsOnCollision)
    {
        if(m_objectRigidBody == null)
        {
            return;
        }

        if(bDisablePhysicsOnCollision)
        {
            if(m_bRemoveRigidbodyOnSnap)
            {
                Destroy(this.GetComponent<Rigidbody>());
                m_objectRigidBody = null;
            }
            else
            {
                toggleRigidbody(false);
            }
           
        }
    }

    private void toggleRigidbody(bool bEnabled)
    {
        if (m_objectRigidBody == null)
        {
            return;
        }

        if (!bEnabled)
        {
            m_objectRigidBody.useGravity = false;
            m_objectRigidBody.velocity = Vector3.zero;
            m_objectRigidBody.Sleep();
        }
        else
        {
            m_objectRigidBody.useGravity = true;
            m_objectRigidBody.WakeUp();
        }
    }

}


