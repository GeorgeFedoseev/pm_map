using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using System.Collections.Generic;

public class CameraScript : MonoBehaviour {
	AppScript app;

	// inspector
	public float moveSpeed = 0.13f;
	public float rotatePhiSpeed = 1.64f;
	public float rotateThetaSpeed = 1.97f;
	public float zoomSpeed = 0.01f;
	public float touchRotatePhiThreshold = 3.06f;
	public float touchZoomThreshold = 4.4f;
	public float touchRotateThetaThreshold = 8.9f;

	// in use
	[HideInInspector]
	public bool controlsInUse;


	private Vector2 touch1StartPos;
	private Vector2 touch2StartPos;

	bool firstTouchInMoveMode = true;
	public bool canMove = true;

	bool firstTouchInRotateMode = true;

	private Vector3 worldInteractPoint;

	// restricting camera movement
	Vector3 oldCamPos;
	Quaternion oldCamRot;
	float minHeight = -10f;
	float maxHeight = 250f;
	float minAngle = 10f;
	float maxAngle = 85f;

	// 2-finger modes
	bool touchRotatePhiZoomMode = false;
	bool touchRotateThetaMode = false;

	// FLYING
	bool flying = false;

	Vector3 targetObjectPosition;
	Vector3 targetPosition;
	Quaternion targetRotation;

	float lookHeight = 10f;
	float lookDistance = 6f;

	// UI avoiding
	public bool overUI = false;


	void Awake(){
		app = AppScript.getSharedInstance ();
	}

	void Update(){
		if (flying) {
			// move
			var delta_pos = targetPosition - transform.position;
			transform.position += 0.8f * Time.deltaTime * delta_pos;

			targetRotation = Quaternion.LookRotation (targetObjectPosition - Camera.main.transform.position, Vector3.up);

			// rotate
			var delta_rot = Mathf.Abs (Quaternion.Angle (targetRotation, transform.rotation));
			transform.rotation = Quaternion.Slerp (transform.rotation, targetRotation, Time.deltaTime * 3.0f);

			if (delta_pos.magnitude < 0.2f && delta_rot < 3f) {
				// reached target
				stopFlying();
			}
		} 

		// over UI check
		if(hasTouches()){
			if(!overUI)
				overUI = IsPointerOverUIObject();	
		} else {
			overUI = false;
		}

	}




	public void setTargetFacility(FacilityScript facility, float _lookHeight = 10f, float _lookDistance = 6f){
		lookHeight = _lookHeight;
		lookDistance = _lookDistance;

		targetObjectPosition = facility.transform.position;

		targetPosition = targetObjectPosition + facility.transform.up * _lookHeight - Vector3.forward * _lookDistance;
		//targetRotation = Quaternion.LookRotation (targetObjectPosition - targetPosition, Vector3.up);


		flying = true;
	}

	public void stopFlying(){
		flying = false;
	}


	// HANDLING TOUCH INPUT HERE
	void LateUpdate () {
		

		if (overUI && !controlsInUse)
			return;

		var canvasScale = app.centerPanelCanvas.scaleFactor;

		#if UNITY_EDITOR
			// test on iPhone 5c
			//canvasScale = 1.893333f;
		#endif

		//Debug.LogWarning("CANVAS SCALE: "+canvasScale);

		var mltpl = Time.deltaTime * 35f/canvasScale;
		
		if (hasTouches ()) {
			stopFlying ();

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

					if (touchDelta.magnitude > 0.5f) {
						controlsInUse = true;
					}

					var camToPointDist = (Camera.main.transform.position - worldInteractPoint).magnitude;
					var h1 = 1f;//Camera.main.nearClipPlane;
					var h2 = camToPointDist - h1;

					var worldDelta = touchDelta /h1*h2;
					var cameraForwardDirection = (Camera.main.transform.forward-new Vector3(0, Camera.main.transform.forward.y, 0)).normalized;
					var cameraRightDirection = (Camera.main.transform.right-new Vector3(0, Camera.main.transform.right.y, 0)).normalized;

					if(canMove){
						Camera.main.transform.position -= (cameraForwardDirection * worldDelta.y * mltpl * moveSpeed
							+ cameraRightDirection * worldDelta.x * mltpl * moveSpeed);
					}

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
						if (Mathf.Abs(deltaDegrees) > 1f) {
							controlsInUse = true;
						}

						Vector3 cross = Vector3.Cross (currentVector, startVector);
						if (cross.z > 0)
							deltaDegrees *= -1;

						var deltaY = currentCenterPoint.y - startCenterPoint.y;

						if (touchRotatePhiZoomMode || touchRotateThetaMode || touchRotatePhiZoomMode) {
							if (touchRotateThetaMode) {								
								var deltaTheta = deltaY * rotateThetaSpeed * mltpl;
								Camera.main.transform.RotateAround (worldInteractPoint, Camera.main.transform.right, deltaTheta);
							} else if (touchRotatePhiZoomMode) {
								var deltaPhi = deltaDegrees * rotatePhiSpeed/**mltpl*/;
								var oldPos = Camera.main.transform.position;
								Camera.main.transform.RotateAround (worldInteractPoint, Vector3.up, deltaPhi);
								var heightCoeff = (Camera.main.transform.position.y - minHeight) / (maxHeight - minHeight);
								if (heightCoeff < 0.1f)
									heightCoeff = 0.1f;
								var deltaZoom = deltaDistance * zoomSpeed * mltpl * heightCoeff;
								var translation = (worldInteractPoint - Camera.main.transform.position).normalized * deltaZoom;

								Camera.main.transform.Translate (translation, Space.World);	

								// check if camera too close to worldInteractPoint, and revert changes if too close
								var pos_after_translate = Camera.main.transform.position;
								var dst_to_interact_point = (worldInteractPoint - pos_after_translate).magnitude;
								//Debug.LogWarning ("DST to interact point: "+dst_to_interact_point);

								if (dst_to_interact_point < 3f) {
									Camera.main.transform.position = oldCamPos;	
									Camera.main.transform.rotation = oldCamRot;	
								} 
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
					}
				}
			}

		}else{
			controlsInUse = false;
			firstTouchInMoveMode = true;

			firstTouchInRotateMode = true;
			touchRotatePhiZoomMode = false;
			touchRotateThetaMode = false;

		}


		// check camera borders
		var newPos = Camera.main.transform.position;
		var newRot = Camera.main.transform.rotation.eulerAngles;

		var thetaAngle = AngleSigned (Camera.main.transform.up, Vector3.up, -Camera.main.transform.right);



		// borders 
		if(!flying){
			if (newPos.y < minHeight || newPos.y > maxHeight
				|| thetaAngle < minAngle || thetaAngle > maxAngle) {

				Camera.main.transform.position = oldCamPos;	
				Camera.main.transform.rotation = oldCamRot;	
			} else {
				oldCamPos = Camera.main.transform.position;
				oldCamRot = Camera.main.transform.rotation;
			}
		}
	}

	public static float AngleSigned(Vector3 v1, Vector3 v2, Vector3 n) {
		return Mathf.Atan2(
			Vector3.Dot(n, Vector3.Cross(v1, v2)),
			Vector3.Dot(v1, v2)) * Mathf.Rad2Deg;
	}

	public static bool IsPointerOverUIObject() {
		PointerEventData eventDataCurrentPosition = new PointerEventData(EventSystem.current);
		eventDataCurrentPosition.position = new Vector2(Input.mousePosition.x, Input.mousePosition.y);
		List<RaycastResult> results = new List<RaycastResult>();
		EventSystem.current.RaycastAll(eventDataCurrentPosition, results);
		return results.Count > 0;
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
