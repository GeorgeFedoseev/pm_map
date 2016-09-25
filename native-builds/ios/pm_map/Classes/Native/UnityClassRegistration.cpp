struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 84 classes
	//0. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//1. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//2. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//6. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//7. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//8. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//9. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//10. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//11. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//12. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//13. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//14. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//17. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//18. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//19. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//20. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//21. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//22. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//23. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//24. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//25. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//26. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//27. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//28. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//29. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//30. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//31. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//32. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//33. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//34. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//35. WheelCollider
	void RegisterClass_WheelCollider();
	RegisterClass_WheelCollider();

	//36. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//37. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//38. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//39. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//40. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//41. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//42. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//43. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//44. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//45. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//46. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//47. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//48. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//49. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//50. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//51. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//52. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//53. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//54. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//55. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//56. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//57. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//58. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//59. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//60. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//61. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//62. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//63. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//64. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//65. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//66. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//67. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//68. CGProgram
	void RegisterClass_CGProgram();
	RegisterClass_CGProgram();

	//69. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//70. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//71. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//72. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//73. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//74. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//75. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//76. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//77. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//78. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//79. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//80. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//81. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//82. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

	//83. NavMeshSettings
	void RegisterClass_NavMeshSettings();
	RegisterClass_NavMeshSettings();

}
