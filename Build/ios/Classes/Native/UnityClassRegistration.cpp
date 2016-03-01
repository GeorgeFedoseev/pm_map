struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 64 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//6. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//7. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//8. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//9. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//10. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//16. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//17. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//18. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//19. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//20. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//21. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//22. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//23. WheelCollider
	void RegisterClass_WheelCollider();
	RegisterClass_WheelCollider();

	//24. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//25. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//26. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//27. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//28. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//29. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//30. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//31. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//32. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//33. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//34. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//35. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//36. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//37. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//38. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//39. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//40. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//41. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//42. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//43. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//44. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//45. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//46. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//47. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//48. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//49. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//50. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//51. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//52. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//53. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//54. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//55. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//56. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//57. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//58. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//59. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//60. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//61. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//62. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//63. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
