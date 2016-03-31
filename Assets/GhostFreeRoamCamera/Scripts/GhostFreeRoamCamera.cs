using UnityEngine;

[RequireComponent(typeof(Camera))]
public class GhostFreeRoamCamera : MonoBehaviour
{
    public float initialSpeed = 10f;
    public float increaseSpeed = 1.25f;

	public float shiftSpeedMltpl = 5f;

    public bool allowMovement = true;
    public bool allowRotation = true;

    public KeyCode forwardButton = KeyCode.W;
    public KeyCode backwardButton = KeyCode.S;
    public KeyCode rightButton = KeyCode.D;
    public KeyCode leftButton = KeyCode.A;

    public float cursorSensitivity = 0.025f;
    public bool cursorToggleAllowed = true;
    public KeyCode cursorToggleButton = KeyCode.Escape;

    private float currentSpeed = 0f;
    private bool moving = false;
    private bool togglePressed = false;

    private void OnEnable()
    {
        if (cursorToggleAllowed)
        {
            Screen.lockCursor = true;
           // Cursor.visible = false;
        }
    }

    private void Update()
    {

		if (Input.GetMouseButtonDown (0)) {
			GetComponent<CameraScript> ().enabled = false;
		}else if(Input.GetMouseButtonUp (0)){
			GetComponent<CameraScript> ().enabled = true;
		}

        if (allowMovement)
        {
            bool lastMoving = moving;
            Vector3 deltaPosition = Vector3.zero;

            if (moving)
                currentSpeed += increaseSpeed * Time.deltaTime;



            moving = false;

            CheckMove(forwardButton, ref deltaPosition, transform.forward);
            CheckMove(backwardButton, ref deltaPosition, -transform.forward);
            CheckMove(rightButton, ref deltaPosition, transform.right);
            CheckMove(leftButton, ref deltaPosition, -transform.right);

            if (moving)
            {
                if (moving != lastMoving)
                    currentSpeed = initialSpeed;

				var mltpl = 1f;
				if (Input.GetKey (KeyCode.LeftShift)) {
					mltpl = shiftSpeedMltpl;
				}

				transform.position += deltaPosition * currentSpeed * Time.deltaTime * mltpl;
            }
            else currentSpeed = 0f;            
        }

		if (allowRotation && Input.GetMouseButton(0))
        {
            Vector3 eulerAngles = transform.eulerAngles;
            eulerAngles.x += -Input.GetAxis("Mouse Y") * 359f * cursorSensitivity;
            eulerAngles.y += Input.GetAxis("Mouse X") * 359f * cursorSensitivity;
			if (eulerAngles.x < 89 || eulerAngles.x > 271) {
				transform.eulerAngles = eulerAngles;
			}
        }

        if (cursorToggleAllowed)
        {
            if (Input.GetKey(cursorToggleButton))
            {
                if (!togglePressed)
                {
                    togglePressed = true;
                    Screen.lockCursor = !Screen.lockCursor;
                   // Cursor.visible = !Cursor.visible;
                }
            }
            else togglePressed = false;
        }
        else
        {
            togglePressed = false;
           // Cursor.visible = false;
        }
    }

    private void CheckMove(KeyCode keyCode, ref Vector3 deltaPosition, Vector3 directionVector)
    {
        if (Input.GetKey(keyCode))
        {
            moving = true;
            deltaPosition += directionVector;
        }
    }
}
