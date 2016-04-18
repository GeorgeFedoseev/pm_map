using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine.Events;
using System;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;

public class SubmitInputField : InputField
{
	[Serializable]
	public class KeyboardDoneEvent : UnityEvent{}
	[Serializable]
	public class KeyboardCancelEvent : UnityEvent{}

	[SerializeField]
	private KeyboardDoneEvent m_keyboardDone = new KeyboardDoneEvent ();
	[SerializeField]
	private KeyboardCancelEvent m_keyboardCancel = new KeyboardCancelEvent ();

	public KeyboardDoneEvent onKeyboardDone {
		get { return m_keyboardDone; }
		set { m_keyboardDone = value; }
	}

	public KeyboardCancelEvent onKeyboardCancel {
		get { return m_keyboardCancel; }
		set { m_keyboardCancel = value; }
	}

	void Update ()
	{
		if (m_Keyboard != null && m_Keyboard.done && !m_Keyboard.wasCanceled || Input.GetButtonDown("Submit")) {
			m_keyboardDone.Invoke ();
		}else if(m_Keyboard != null && m_Keyboard.wasCanceled){
			m_keyboardCancel.Invoke ();				
		}
	}
}