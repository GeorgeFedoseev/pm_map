using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TextMarquee : MonoBehaviour {
    public float scrollSpeed = 0.5f;
	[HideInInspector]
	private Text label;

	public float leftMargin = 22f;

	bool left_direction = true;

    void Start () {
		label = GetComponent<Text>();
    }

    void Update (){
		var diff = label.preferredWidth - label.rectTransform.rect.width;
		if (diff > 0) {			 
			if (left_direction) {
				if (label.rectTransform.anchoredPosition.x > leftMargin - diff) {

					label.rectTransform.anchoredPosition = new Vector2 (
						label.rectTransform.anchoredPosition.x - scrollSpeed * Time.deltaTime,
						label.rectTransform.anchoredPosition.y
					);
				} else {
					left_direction = false;
				}
			} else if (!left_direction) {
				if (label.rectTransform.anchoredPosition.x < leftMargin) {

					label.rectTransform.anchoredPosition = new Vector2 (
						label.rectTransform.anchoredPosition.x + scrollSpeed * Time.deltaTime,
						label.rectTransform.anchoredPosition.y
					);
				} else {
					left_direction = true;
				}
			}


		} else {
			label.rectTransform.anchoredPosition = new Vector2 (leftMargin, label.rectTransform.anchoredPosition.y);
		}
    }
}