using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

public class CameraScript : MonoBehaviour {

	AppScript app;

	private Vector3 rotateAroundPos;

	private Vector2 touch1StartPos;
	private Vector2 touch2StartPos;

	private Vector3 rotateAroundTouchStartPos;

	private Vector3 worldInteractPoint;

	Vector3 oldCamPos;
	Quaternion oldCamRot;

	bool firstTouchInMoveMode = true;
	bool firstTouchInRotateMode = true;


	public float moveSpeed = 0.13f;
	public float rotatePhiSpeed = 1.64f;
	public float rotateThetaSpeed = 1.97f;
	public float zoomSpeed = 0.01f;

	bool touchRotatePhiZoomMode = false;

	public float touchRotatePhiThreshold = 3.06f;
	public float touchZoomThreshold = 4.4f;

	bool touchRotateThetaMode = false;
	public float touchRotateThetaThreshold = 8.9f;
	float maxHeight = 120f, minHeight = -4f;



	public bool flying = false;
	public FacilityScript lookTarget;
	float flySpeed = 10f;

	public float lookHeight = 10f;
	public float lookDistance = 6f;

	void Awake(){
		app = AppScript.getSharedInstance ();
		rotateAroundPos = new Vector3 (0, 0f, 0);	
	}

	void Update(){
		if (flying && lookTarget != null) {
			// move
			var cam_look_pos = lookTarget.transform.position + lookTarget.transform.up * lookHeight + lookTarget.transform.forward * lookDistance;
			var delta_pos = cam_look_pos - transform.position;


			transform.position += 0.8f * Time.deltaTime * (cam_look_pos - transform.position);

			// rotate

			var rot = Quaternion.LookRotation (lookTarget.transform.position - transform.position, Vector3.up);
			var delta_rot = Mathf.Abs (Quaternion.Angle (rot, transform.rotation));

			transform.rotation = Quaternion.Slerp (transform.rotation, rot, Time.deltaTime * 3.0f);

			if (delta_pos.magnitude < 0.2f && delta_rot < 3f) {
				flying = false;
			}
		} 




	}

	void FlyComplete(){
		
	}

	void LateUpdate () {
		var mltpl = Time.deltaTime * 35f/Screen.dpi*82f;






		// do nothing when over GUI
		if (touchInput ()) {
			foreach (Touch touch in Input.touches) {
				int pointerID = touch.fingerId;
				if (EventSystem.current.IsPointerOverGameObject (pointerID)) {
					// at least on touch is over a canvas UI
					return;
				}

				if (touch.phase == TouchPhase.Ended) {
					// here we don't know if the touch was over an canvas UI
					return;
				}
			}
		} else {
			if (EventSystem.current.IsPointerOverGameObject ()) {
				// at least on touch is over a canvas UI
				return;
			}
		}
			




		if (hasTouches ()) {
			flying = false;

			//Debug.LogWarning ("World move");
			Vector2 touch1Pos = getTouchPos ();

			if (touchCount() == 1 && !Input.GetKey(KeyCode.LeftCommand)) {
				// moving
				firstTouchInRotateMode = true;

				if (firstTouchInMoveMode) {
					Ray ray = Camera.main.ScreenPointToRay(touch1Pos);
					RaycastHit hit;
					int buildingLayer = 1 << 9 | 1 << 10 | 1 << 11 | 1 << 12 | 1 << 13 | 1 << 14;
					if (Physics.Raycast (ray.origin, ray.direction, out hit, Mathf.Infinity, buildingLayer)) {						
						worldInteractPoint = hit.point;
						firstTouchInMoveMode = false;
						touch1StartPos = touch1Pos;
					}
				} else {
					var touchDelta = touch1Pos - touch1StartPos;

					var camToPointDist = (Camera.main.transform.position - worldInteractPoint).magnitude;
					var h1 = 1f;//Camera.main.nearClipPlane;
					var h2 = camToPointDist - h1;

					var worldDelta = touchDelta /h1*h2;
					var cameraForwardDirection = (Camera.main.transform.forward-new Vector3(0, Camera.main.transform.forward.y, 0)).normalized;
					var cameraRightDirection = (Camera.main.transform.right-new Vector3(0, Camera.main.transform.right.y, 0)).normalized;

					Camera.main.transform.position -= (cameraForwardDirection*worldDelta.y*mltpl*moveSpeed
						+ cameraRightDirection*worldDelta.x*mltpl*moveSpeed);
					touch1StartPos = touch1Pos;						
				}

			} else if(touchCount() == 2 || !touchInput() && Input.GetKey(KeyCode.LeftCommand)) {
				// rotating
				firstTouchInMoveMode = true;

				if (firstTouchInRotateMode) {					
					touch1StartPos = touch1Pos;

					if (touchInput ()) {
						touch2StartPos = getTouch2Pos ();
					}
						
					var startCenterPoint = (touch1StartPos + touch2StartPos) / 2f;
					Ray ray = Camera.main.ScreenPointToRay(startCenterPoint);
					RaycastHit hit;
					int buildingLayer = 1 << 9 | 1 << 10 | 1 << 11 | 1 << 12 | 1 << 13 | 1 << 14;
					if (Physics.Raycast (ray.origin, ray.direction, out hit, Mathf.Infinity, buildingLayer)) {						
						worldInteractPoint = hit.point;				
						firstTouchInRotateMode = false;
					}
				}else {
					if (touchInput ()) {
						// rotate and zoom camera with 2 fingers
						Vector2 touch2Pos = getTouch2Pos ();
						var deltaDistance = (touch2Pos - touch1Pos).magnitude - (touch2StartPos - touch1StartPos).magnitude;
						var startCenterPoint = (touch1StartPos + touch2StartPos) / 2f;
						var startVector = touch1StartPos - touch2StartPos;
						var currentCenterPoint = (touch1Pos + touch2Pos) / 2f;
						var currentVector = touch1Pos - touch2Pos;

						// get signed vector
						var deltaDegrees = Vector2.Angle (currentVector, startVector);
						Vector3 cross = Vector3.Cross(currentVector, startVector);
						if (cross.z > 0)
							deltaDegrees *= -1;

						var deltaY = currentCenterPoint.y - startCenterPoint.y;

						if (touchRotatePhiZoomMode || touchRotateThetaMode || touchRotatePhiZoomMode) {
							if (touchRotateThetaMode) {								
								var deltaTheta = deltaY * rotateThetaSpeed *mltpl;
								Camera.main.transform.RotateAround (worldInteractPoint, Camera.main.transform.right, deltaTheta);
							} else if (touchRotatePhiZoomMode) {
								var deltaPhi = deltaDegrees * rotatePhiSpeed/**mltpl*/;
								var oldPos = Camera.main.transform.position;
								Camera.main.transform.RotateAround (worldInteractPoint, Vector3.up, deltaPhi);
								var heightCoeff = (Camera.main.transform.position.y - minHeight)/(maxHeight-minHeight);
								if (heightCoeff < 0.1f)
									heightCoeff = 0.1f;
								var deltaZoom = deltaDistance * zoomSpeed * mltpl*heightCoeff;
								var translation = (worldInteractPoint - Camera.main.transform.position).normalized * deltaZoom;

								Camera.main.transform.Translate (translation, Space.World);	
							} else {

							}
						} else {
							if (Mathf.Abs (deltaY) > touchRotateThetaThreshold) {
								touchRotateThetaMode = true;					
							} else if (Mathf.Abs (deltaDegrees) > touchRotatePhiThreshold
								|| Mathf.Abs (deltaDistance) > touchZoomThreshold) {
								touchRotatePhiZoomMode = true;
							} else {

							}
						}
						touch1StartPos = touch1Pos;
						touch2StartPos = touch2Pos;
					} else {
						// rotate with mouse

						var touchDelta = touch1Pos - touch1StartPos;
						var deltaYRotation = touchDelta.x * rotatePhiSpeed;
						var deltaXRotation = touchDelta.y * rotateThetaSpeed;

					}
				}
			}

		}else{
			firstTouchInMoveMode = true;
			firstTouchInRotateMode = true;
			touchRotatePhiZoomMode = false;
			touchRotateThetaMode = false;
		}




		// check camera
		if(!flying){
			var newPos = Camera.main.transform.position;
			var newRot = Camera.main.transform.rotation.eulerAngles;

			if (newPos.y < minHeight || newPos.y > maxHeight
				|| newRot.x < 20f || newRot.x > 85f) {
				Camera.main.transform.position = oldCamPos;	
				Camera.main.transform.rotation = oldCamRot;	
			} else {
				oldCamPos = Camera.main.transform.position;
				oldCamRot = Camera.main.transform.rotation;
			}
		}

	}

	void OnDrawGizmosSelected() {
		Gizmos.color = Color.yellow;
		Gizmos.DrawSphere(rotateAroundPos, 1);
	}

	protected Vector2 getTouchPos(){
		Vector2 touchPos = Vector2.zero;

		if (Application.platform != RuntimePlatform.IPhonePlayer){
			touchPos = Input.mousePosition;
		} else {
			if(Input.touchCount > 0)
				touchPos = Input.touches[0].position;
		}
		return touchPos;
	}

	protected Vector2 getTouch2Pos(){		
		return Input.touches[1].position;
	}

	protected bool hasTouches(){
		if (Application.platform != RuntimePlatform.IPhonePlayer){
			// use the input stuff
			return Input.GetMouseButton(0);
		} else {			
			return (Input.touchCount > 0);
		}
	}

	protected int touchCount(){
		if (touchInput ())
			return Input.touchCount;
		else
			return Input.GetMouseButton (0)?1:0;
	}

	protected bool touchInput(){
		return true; // debug through unity remote
		return (Application.platform == RuntimePlatform.IPhonePlayer || Application.platform == RuntimePlatform.Android);
	}

	// convert screen point to world point
	private Vector2 getWorldPoint (Vector2 screenPoint) {
		RaycastHit hit;
		Physics.Raycast(Camera.main.ScreenPointToRay(screenPoint), out hit);
		return hit.point;
	}
}
