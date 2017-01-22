﻿using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

public class PlayerControl : MonoBehaviour {

	public float velocity = 0.1f;

	[HideInInspector] public bool hasTurn = false;

	private float hSpeed = 0f;
	private Animator anim;
	[HideInInspector] public Transform pivot;
	private Rigidbody2D rigidBody;
	protected float tilt;
	public bool _showBox = true;
	protected GameObject turnIndicator;

	public Renderer rend;

//	void OnDrawGizmos(){
//		Debug.Log ("Draw Gizmos...");
//		if(_showBox){
//			OnDrawGizmosSelected ();	
//		}
//	} 

	void OnDrawGizmosSelected(){
		Gizmos.color = Color.red;
//		Gizmos.DrawSphere (transform.position, 0.1f);
//		Gizmos.DrawWireCube (transform.position, transform.position);
		Vector3 center = rend.bounds.center;
		float radius = rend.bounds.extents.magnitude;
		Gizmos.DrawWireSphere (center, radius);
	}
	void Start(){

		rend = GetComponent<Renderer> ();
	}

	void Awake () {
		anim = GetComponent<Animator> ();
		pivot = transform.FindChild ("Pivot");
		rigidBody = GetComponent<Rigidbody2D> ();
	}

	void FixedUpdate () {
		
		if (hasTurn) {

			if (gameObject.tag == "Player") {
			
				hSpeed = Input.GetAxis ("Horizontal");
				hSpeed = CrossPlatformInputManager.GetAxis ("Horizontal");
				anim.SetFloat ("Speed", Mathf.Abs (hSpeed));
				rigidBody.velocity = new Vector2 (hSpeed * velocity, rigidBody.velocity.y);	

				if (Input.GetKey (KeyCode.Z)) {
					tilt += 1.0f;
				}

				if (CrossPlatformInputManager.GetAxis ("Vertical") > 0) {
					Debug.Log ("Tilt UP");
					tilt += 1.0f;
				}

				if (CrossPlatformInputManager.GetAxis ("Vertical") < 0) {
					Debug.Log ("Tilt DOWN");
					tilt -= 1.0f;
				}

				if (Input.GetKey (KeyCode.X)) {
					tilt -= 1.0f;
				}

				tilt = Mathf.Clamp (tilt, 20, 180);
				pivot.rotation = Quaternion.Euler (0, 0, tilt);
			
			} else {
				tilt = Mathf.Clamp (tilt, 90, 180);
				pivot.rotation = Quaternion.Euler (0, 0, tilt);
			}
		
		} else {
			
		}
	
	
	}
}
