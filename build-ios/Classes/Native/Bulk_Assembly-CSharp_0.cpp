#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_BackgroundScroll1444628405.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "AssemblyU2DCSharp_BombCollision4025668808.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_EnemyController2146768720.h"
#include "AssemblyU2DCSharp_EnemySpawner2939277584.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "AssemblyU2DCSharp_GlobalState2160653960.h"
#include "AssemblyU2DCSharp_MenuManager314201098.h"
#include "AssemblyU2DCSharp_newscroll1500050535.h"
#include "AssemblyU2DCSharp_PlayerAttributes3803630156.h"
#include "AssemblyU2DCSharp_PlayerMovement3166138480.h"
#include "AssemblyU2DCSharp_PlayerRotation2118416557.h"

// BackgroundScroll
struct BackgroundScroll_t1444628405;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Renderer
struct Renderer_t257310565;
// System.Object
struct Il2CppObject;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Material
struct Material_t193706927;
// BombCollision
struct BombCollision_t4025668808;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// EnemyController
struct EnemyController_t2146768720;
// EnemySpawner
struct EnemySpawner_t2939277584;
// UnityEngine.Transform
struct Transform_t3275118058;
// GlobalState
struct GlobalState_t2160653960;
// MenuManager
struct MenuManager_t314201098;
// newscroll
struct newscroll_t1500050535;
// PlayerAttributes
struct PlayerAttributes_t3803630156;
// PlayerMovement
struct PlayerMovement_t3166138480;
// PlayerRotation
struct PlayerRotation_t2118416557;
extern const MethodInfo* Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var;
extern const uint32_t BackgroundScroll_Start_m395723700_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t BackgroundScroll_Update_m667893917_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var;
extern const uint32_t BombCollision_Start_m2308044559_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3444311153;
extern const uint32_t BombCollision_OnTriggerEnter2D_m3238112663_MetadataUsageId;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t BombCollision_destroyObject_m4243983942_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3873026241;
extern const uint32_t EnemySpawner_Start_m1167211377_MetadataUsageId;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t EnemySpawner_spawnEnemy_m3946564646_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2328218740;
extern const uint32_t MenuManager_startGame_m1726367853_MetadataUsageId;
extern const uint32_t newscroll_LateUpdate_m1630743631_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3068682171;
extern const uint32_t PlayerAttributes_OnTriggerEnter2D_m3419325123_MetadataUsageId;
extern const uint32_t PlayerMovement_Update_m524456402_MetadataUsageId;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t PlayerRotation_Update_m1944837969_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t257310565_m772028041(__this, method) ((  Renderer_t257310565 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m464100923 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m475173995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Camera_ScreenToWorldPoint_m929392728 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::Set(System.Single,System.Single)
extern "C"  void Vector2_Set_m3041191210 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C"  Material_t193706927 * Renderer_get_material_m2553789785 (Renderer_t257310565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
extern "C"  Vector2_t2243707579  Material_get_mainTextureOffset_m786294629 (Material_t193706927 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2243707579  Vector2_op_Multiply_m4236139442 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Addition_m1389598521 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureOffset_m3533368774 (Material_t193706927 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m475627522(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.Animator::Play(System.String)
extern "C"  void Animator_Play_m1123842248 (Animator_t69676727 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
extern "C"  void MonoBehaviour_InvokeRepeating_m3468262484 (MonoBehaviour_t1158329972 * __this, String_t* p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Random::get_insideUnitCircle()
extern "C"  Vector2_t2243707579  Random_get_insideUnitCircle_m3656580790 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t4030073918  Quaternion_get_identity_m1561886418 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2216684562 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_MoveTowards_m1358638081 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
extern "C"  void Vector3_Normalize_m3679112426 (Vector3_t2243707580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t4030073918  Quaternion_Euler_m2887458175 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3411284563 (Transform_t3275118058 * __this, Quaternion_t4030073918  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BackgroundScroll::.ctor()
extern "C"  void BackgroundScroll__ctor_m2582652180 (BackgroundScroll_t1444628405 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackgroundScroll::Start()
extern "C"  void BackgroundScroll_Start_m395723700 (BackgroundScroll_t1444628405 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundScroll_Start_m395723700_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentRend = GetComponent<Renderer> ();
		// currentRend = GetComponent<Renderer> ();
		Renderer_t257310565 * L_0 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		__this->set_currentRend_2(L_0);
		// }
		return;
	}
}
// System.Void BackgroundScroll::Update()
extern "C"  void BackgroundScroll_Update_m667893917 (BackgroundScroll_t1444628405 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BackgroundScroll_Update_m667893917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (Input.GetMouseButton (0)) {
		// if (Input.GetMouseButton (0)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m464100923(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0055;
		}
	}
	{
		// target = Camera.main.ScreenToWorldPoint (Input.mousePosition);
		// target = Camera.main.ScreenToWorldPoint (Input.mousePosition);
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		// target = Camera.main.ScreenToWorldPoint (Input.mousePosition);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		// target = Camera.main.ScreenToWorldPoint (Input.mousePosition);
		NullCheck(L_1);
		Vector3_t2243707580  L_3 = Camera_ScreenToWorldPoint_m929392728(L_1, L_2, /*hidden argument*/NULL);
		__this->set_target_5(L_3);
		// lastTarget = target;
		Vector3_t2243707580  L_4 = __this->get_target_5();
		__this->set_lastTarget_6(L_4);
		// speed.Set (target.x, target.y);
		Vector2_t2243707579 * L_5 = __this->get_address_of_speed_3();
		Vector3_t2243707580 * L_6 = __this->get_address_of_target_5();
		float L_7 = L_6->get_x_1();
		Vector3_t2243707580 * L_8 = __this->get_address_of_target_5();
		float L_9 = L_8->get_y_2();
		// speed.Set (target.x, target.y);
		Vector2_Set_m3041191210(L_5, L_7, L_9, /*hidden argument*/NULL);
		goto IL_0078;
	}

IL_0055:
	{
		// speed.Set (lastTarget.x, lastTarget.y);
		Vector2_t2243707579 * L_10 = __this->get_address_of_speed_3();
		Vector3_t2243707580 * L_11 = __this->get_address_of_lastTarget_6();
		float L_12 = L_11->get_x_1();
		Vector3_t2243707580 * L_13 = __this->get_address_of_lastTarget_6();
		float L_14 = L_13->get_y_2();
		// speed.Set (lastTarget.x, lastTarget.y);
		Vector2_Set_m3041191210(L_10, L_12, L_14, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// if (speed.x > 0.25F) {
		Vector2_t2243707579 * L_15 = __this->get_address_of_speed_3();
		float L_16 = L_15->get_x_0();
		if ((!(((float)L_16) > ((float)(0.25f)))))
		{
			goto IL_009f;
		}
	}
	{
		// speed.x = 0.25F;
		Vector2_t2243707579 * L_17 = __this->get_address_of_speed_3();
		L_17->set_x_0((0.25f));
	}

IL_009f:
	{
		// if (speed.x < -0.25F) {
		Vector2_t2243707579 * L_18 = __this->get_address_of_speed_3();
		float L_19 = L_18->get_x_0();
		if ((!(((float)L_19) < ((float)(-0.25f)))))
		{
			goto IL_00c6;
		}
	}
	{
		// speed.x = -0.25F;
		Vector2_t2243707579 * L_20 = __this->get_address_of_speed_3();
		L_20->set_x_0((-0.25f));
	}

IL_00c6:
	{
		// if (speed.y > 0.25F) {
		Vector2_t2243707579 * L_21 = __this->get_address_of_speed_3();
		float L_22 = L_21->get_y_1();
		if ((!(((float)L_22) > ((float)(0.25f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// speed.y = 0.25F;
		Vector2_t2243707579 * L_23 = __this->get_address_of_speed_3();
		L_23->set_y_1((0.25f));
	}

IL_00ed:
	{
		// if (speed.y < -0.25F) {
		Vector2_t2243707579 * L_24 = __this->get_address_of_speed_3();
		float L_25 = L_24->get_y_1();
		if ((!(((float)L_25) < ((float)(-0.25f)))))
		{
			goto IL_0114;
		}
	}
	{
		// speed.y = -0.25F;
		Vector2_t2243707579 * L_26 = __this->get_address_of_speed_3();
		L_26->set_y_1((-0.25f));
	}

IL_0114:
	{
		// Vector2 currentPosition = currentRend.material.mainTextureOffset;
		Renderer_t257310565 * L_27 = __this->get_currentRend_2();
		// Vector2 currentPosition = currentRend.material.mainTextureOffset;
		NullCheck(L_27);
		Material_t193706927 * L_28 = Renderer_get_material_m2553789785(L_27, /*hidden argument*/NULL);
		// Vector2 currentPosition = currentRend.material.mainTextureOffset;
		NullCheck(L_28);
		Vector2_t2243707579  L_29 = Material_get_mainTextureOffset_m786294629(L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		// currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
		Renderer_t257310565 * L_30 = __this->get_currentRend_2();
		// currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
		NullCheck(L_30);
		Material_t193706927 * L_31 = Renderer_get_material_m2553789785(L_30, /*hidden argument*/NULL);
		Vector2_t2243707579  L_32 = V_0;
		Vector2_t2243707579  L_33 = __this->get_speed_3();
		// currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
		float L_34 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		// currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
		Vector2_t2243707579  L_35 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
		// currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
		Vector2_t2243707579  L_36 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_32, L_35, /*hidden argument*/NULL);
		// currentRend.material.mainTextureOffset = currentPosition + (speed * Time.deltaTime);
		NullCheck(L_31);
		Material_set_mainTextureOffset_m3533368774(L_31, L_36, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BombCollision::.ctor()
extern "C"  void BombCollision__ctor_m3734489475 (BombCollision_t4025668808 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BombCollision::Start()
extern "C"  void BombCollision_Start_m2308044559 (BombCollision_t4025668808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BombCollision_Start_m2308044559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		// anim = GetComponent<Animator>();
		Animator_t69676727 * L_0 = Component_GetComponent_TisAnimator_t69676727_m475627522(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m475627522_MethodInfo_var);
		__this->set_anim_2(L_0);
		// }
		return;
	}
}
// System.Void BombCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void BombCollision_OnTriggerEnter2D_m3238112663 (BombCollision_t4025668808 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BombCollision_OnTriggerEnter2D_m3238112663_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.Play("Bomb_Explodeanim");
		Animator_t69676727 * L_0 = __this->get_anim_2();
		// anim.Play("Bomb_Explodeanim");
		NullCheck(L_0);
		Animator_Play_m1123842248(L_0, _stringLiteral3444311153, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BombCollision::destroyObject()
extern "C"  void BombCollision_destroyObject_m4243983942 (BombCollision_t4025668808 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BombCollision_destroyObject_m4243983942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		// Destroy(gameObject);
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		// Destroy(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BombCollision::Update()
extern "C"  void BombCollision_Update_m592771462 (BombCollision_t4025668808 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyController::.ctor()
extern "C"  void EnemyController__ctor_m1153179309 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	{
		// public float speed = 1.8f; // defualt speed if not special enemy
		__this->set_speed_3((1.8f));
		// public float specialSpeed = 2.2f; //speed for special boss enemies
		__this->set_specialSpeed_4((2.2f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::Start()
extern "C"  void EnemyController_Start_m2470974037 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyController::Update()
extern "C"  void EnemyController_Update_m3131616442 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyController::checkBound()
extern "C"  void EnemyController_checkBound_m1990403521 (EnemyController_t2146768720 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::.ctor()
extern "C"  void EnemySpawner__ctor_m835779921 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	{
		// public float spawnTime = 0.5f;
		__this->set_spawnTime_3((0.5f));
		// public int spawnRadius = 10;
		__this->set_spawnRadius_4(((int32_t)10));
		// public int minSpawnDistance = 3;
		__this->set_minSpawnDistance_5(3);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::Start()
extern "C"  void EnemySpawner_Start_m1167211377 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_Start_m1167211377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InvokeRepeating("spawnEnemy", spawnTime, spawnTime);
		float L_0 = __this->get_spawnTime_3();
		float L_1 = __this->get_spawnTime_3();
		// InvokeRepeating("spawnEnemy", spawnTime, spawnTime);
		MonoBehaviour_InvokeRepeating_m3468262484(__this, _stringLiteral3873026241, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemySpawner::Update()
extern "C"  void EnemySpawner_Update_m3003275738 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::spawnEnemy()
extern "C"  void EnemySpawner_spawnEnemy_m3946564646 (EnemySpawner_t2939277584 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_spawnEnemy_m3946564646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Vector3 spawnLocation = transform.position;
		// Vector3 spawnLocation = transform.position;
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// Vector3 spawnLocation = transform.position;
		NullCheck(L_0);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// Vector2 circlePoint = Random.insideUnitCircle;
		Vector2_t2243707579  L_2 = Random_get_insideUnitCircle_m3656580790(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_2;
		// circlePoint.x = circlePoint.x * this.spawnRadius;
		float L_3 = (&V_1)->get_x_0();
		int32_t L_4 = __this->get_spawnRadius_4();
		(&V_1)->set_x_0(((float)((float)L_3*(float)(((float)((float)L_4))))));
		// circlePoint.y = circlePoint.y * this.spawnRadius;
		float L_5 = (&V_1)->get_y_1();
		int32_t L_6 = __this->get_spawnRadius_4();
		(&V_1)->set_y_1(((float)((float)L_5*(float)(((float)((float)L_6))))));
		// if (circlePoint.x < this.minSpawnDistance) {
		float L_7 = (&V_1)->get_x_0();
		int32_t L_8 = __this->get_minSpawnDistance_5();
		if ((!(((float)L_7) < ((float)(((float)((float)L_8)))))))
		{
			goto IL_0068;
		}
	}
	{
		// circlePoint.x = circlePoint.x + 1;
		float L_9 = (&V_1)->get_x_0();
		(&V_1)->set_x_0(((float)((float)L_9+(float)(1.0f))));
	}

IL_0068:
	{
		// if (circlePoint.y < this.minSpawnDistance) {
		float L_10 = (&V_1)->get_y_1();
		int32_t L_11 = __this->get_minSpawnDistance_5();
		if ((!(((float)L_10) < ((float)(((float)((float)L_11)))))))
		{
			goto IL_0091;
		}
	}
	{
		// circlePoint.y = circlePoint.y + 1;
		float L_12 = (&V_1)->get_y_1();
		(&V_1)->set_y_1(((float)((float)L_12+(float)(1.0f))));
	}

IL_0091:
	{
		// spawnLocation.x = spawnLocation.x + circlePoint.x;
		float L_13 = (&V_0)->get_x_1();
		float L_14 = (&V_1)->get_x_0();
		(&V_0)->set_x_1(((float)((float)L_13+(float)L_14)));
		// spawnLocation.y = spawnLocation.y + circlePoint.y;
		float L_15 = (&V_0)->get_y_2();
		float L_16 = (&V_1)->get_y_1();
		(&V_0)->set_y_2(((float)((float)L_15+(float)L_16)));
		// Instantiate (bomb, spawnLocation, Quaternion.identity);
		GameObject_t1756533147 * L_17 = __this->get_bomb_6();
		Vector3_t2243707580  L_18 = V_0;
		// Instantiate (bomb, spawnLocation, Quaternion.identity);
		Quaternion_t4030073918  L_19 = Quaternion_get_identity_m1561886418(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Instantiate (bomb, spawnLocation, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_17, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		// }
		return;
	}
}
// System.Void GlobalState::.ctor()
extern "C"  void GlobalState__ctor_m1096767683 (GlobalState_t2160653960 * __this, const MethodInfo* method)
{
	{
		// public float score = 0;
		__this->set_score_2((0.0f));
		// private bool gameOver = false;
		__this->set_gameOver_3((bool)0);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GlobalState::Start()
extern "C"  void GlobalState_Start_m3787405327 (GlobalState_t2160653960 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void GlobalState::Update()
extern "C"  void GlobalState_Update_m1704023206 (GlobalState_t2160653960 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void MenuManager::.ctor()
extern "C"  void MenuManager__ctor_m573957227 (MenuManager_t314201098 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuManager::startGame()
extern "C"  void MenuManager_startGame_m1726367853 (MenuManager_t314201098 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuManager_startGame_m1726367853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game");
		// SceneManager.LoadScene("game");
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral2328218740, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void newscroll::.ctor()
extern "C"  void newscroll__ctor_m2370178006 (newscroll_t1500050535 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void newscroll::Start()
extern "C"  void newscroll_Start_m4233812482 (newscroll_t1500050535 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void newscroll::Update()
extern "C"  void newscroll_Update_m2183712235 (newscroll_t1500050535 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void newscroll::LateUpdate()
extern "C"  void newscroll_LateUpdate_m1630743631 (newscroll_t1500050535 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (newscroll_LateUpdate_m1630743631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Renderer>().material.mainTextureOffset = speed * Time.time;
		// GetComponent<Renderer>().material.mainTextureOffset = speed * Time.time;
		Renderer_t257310565 * L_0 = Component_GetComponent_TisRenderer_t257310565_m772028041(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t257310565_m772028041_MethodInfo_var);
		// GetComponent<Renderer>().material.mainTextureOffset = speed * Time.time;
		NullCheck(L_0);
		Material_t193706927 * L_1 = Renderer_get_material_m2553789785(L_0, /*hidden argument*/NULL);
		Vector2_t2243707579  L_2 = __this->get_speed_2();
		// GetComponent<Renderer>().material.mainTextureOffset = speed * Time.time;
		float L_3 = Time_get_time_m2216684562(NULL /*static, unused*/, /*hidden argument*/NULL);
		// GetComponent<Renderer>().material.mainTextureOffset = speed * Time.time;
		Vector2_t2243707579  L_4 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		// GetComponent<Renderer>().material.mainTextureOffset = speed * Time.time;
		NullCheck(L_1);
		Material_set_mainTextureOffset_m3533368774(L_1, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerAttributes::.ctor()
extern "C"  void PlayerAttributes__ctor_m2371275711 (PlayerAttributes_t3803630156 * __this, const MethodInfo* method)
{
	{
		// public int health = 3;
		__this->set_health_2(3);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerAttributes::Start()
extern "C"  void PlayerAttributes_Start_m4159366667 (PlayerAttributes_t3803630156 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerAttributes::Update()
extern "C"  void PlayerAttributes_Update_m2077468366 (PlayerAttributes_t3803630156 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerAttributes::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerAttributes_OnTriggerEnter2D_m3419325123 (PlayerAttributes_t3803630156 * __this, Collider2D_t646061738 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerAttributes_OnTriggerEnter2D_m3419325123_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.health--;
		int32_t L_0 = __this->get_health_2();
		__this->set_health_2(((int32_t)((int32_t)L_0-(int32_t)1)));
		// if (this.health == 0) {
		int32_t L_1 = __this->get_health_2();
		if (L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SceneManager.LoadScene("end");
		// SceneManager.LoadScene("end");
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral3068682171, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void PlayerAttributes::handleCollision()
extern "C"  void PlayerAttributes_handleCollision_m3014785747 (PlayerAttributes_t3803630156 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m767722651 (PlayerMovement_t3166138480 * __this, const MethodInfo* method)
{
	{
		// public float speed = 2f;
		__this->set_speed_2((2.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Start()
extern "C"  void PlayerMovement_Start_m727481071 (PlayerMovement_t3166138480 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
extern "C"  void PlayerMovement_Update_m524456402 (PlayerMovement_t3166138480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Update_m524456402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// if (Input.GetMouseButton(0)) {
		// if (Input.GetMouseButton(0)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m464100923(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		NullCheck(L_1);
		Vector3_t2243707580  L_3 = Camera_ScreenToWorldPoint_m929392728(L_1, L_2, /*hidden argument*/NULL);
		__this->set_target_3(L_3);
		// target.z = transform.position.z;
		Vector3_t2243707580 * L_4 = __this->get_address_of_target_3();
		// target.z = transform.position.z;
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// target.z = transform.position.z;
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_z_3();
		L_4->set_z_3(L_7);
		// transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
		// transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
		Transform_t3275118058 * L_8 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		Vector3_t2243707580  L_11 = __this->get_target_3();
		float L_12 = __this->get_speed_2();
		// transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
		float L_13 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		// transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
		Vector3_t2243707580  L_14 = Vector3_MoveTowards_m1358638081(NULL /*static, unused*/, L_10, L_11, ((float)((float)L_12*(float)L_13)), /*hidden argument*/NULL);
		// transform.position = Vector3.MoveTowards(transform.position, target, speed * Time.deltaTime);
		NullCheck(L_8);
		Transform_set_position_m2469242620(L_8, L_14, /*hidden argument*/NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void PlayerRotation::.ctor()
extern "C"  void PlayerRotation__ctor_m3981107186 (PlayerRotation_t2118416557 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerRotation::Start()
extern "C"  void PlayerRotation_Start_m2781985914 (PlayerRotation_t2118416557 * __this, const MethodInfo* method)
{
	{
		// }
		return;
	}
}
// System.Void PlayerRotation::Update()
extern "C"  void PlayerRotation_Update_m1944837969 (PlayerRotation_t2118416557 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerRotation_Update_m1944837969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	float V_3 = 0.0f;
	{
		// if (Input.GetMouseButton(0)) {
		// if (Input.GetMouseButton(0)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButton_m464100923(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00e3;
		}
	}
	{
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_t189460977 * L_1 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_2 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		// target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		NullCheck(L_1);
		Vector3_t2243707580  L_3 = Camera_ScreenToWorldPoint_m929392728(L_1, L_2, /*hidden argument*/NULL);
		__this->set_target_2(L_3);
		// target.z = transform.position.z;
		Vector3_t2243707580 * L_4 = __this->get_address_of_target_2();
		// target.z = transform.position.z;
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// target.z = transform.position.z;
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_z_3();
		L_4->set_z_3(L_7);
		// target.x = transform.position.x - target.x;
		Vector3_t2243707580 * L_8 = __this->get_address_of_target_2();
		// target.x = transform.position.x - target.x;
		Transform_t3275118058 * L_9 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// target.x = transform.position.x - target.x;
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		Vector3_t2243707580 * L_12 = __this->get_address_of_target_2();
		float L_13 = L_12->get_x_1();
		L_8->set_x_1(((float)((float)L_11-(float)L_13)));
		// target.y = transform.position.y - target.y;
		Vector3_t2243707580 * L_14 = __this->get_address_of_target_2();
		// target.y = transform.position.y - target.y;
		Transform_t3275118058 * L_15 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		// target.y = transform.position.y - target.y;
		NullCheck(L_15);
		Vector3_t2243707580  L_16 = Transform_get_position_m1104419803(L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		float L_17 = (&V_2)->get_y_2();
		Vector3_t2243707580 * L_18 = __this->get_address_of_target_2();
		float L_19 = L_18->get_y_2();
		L_14->set_y_2(((float)((float)L_17-(float)L_19)));
		// target.Normalize();
		Vector3_t2243707580 * L_20 = __this->get_address_of_target_2();
		// target.Normalize();
		Vector3_Normalize_m3679112426(L_20, /*hidden argument*/NULL);
		// float rot_z = Mathf.Atan2(target.y, target.x) * Mathf.Rad2Deg;
		Vector3_t2243707580 * L_21 = __this->get_address_of_target_2();
		float L_22 = L_21->get_y_2();
		Vector3_t2243707580 * L_23 = __this->get_address_of_target_2();
		float L_24 = L_23->get_x_1();
		// float rot_z = Mathf.Atan2(target.y, target.x) * Mathf.Rad2Deg;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_25 = atan2f(L_22, L_24);
		V_3 = ((float)((float)L_25*(float)(57.29578f)));
		// transform.rotation = Quaternion.Euler(0f, 0f, rot_z + 90);
		// transform.rotation = Quaternion.Euler(0f, 0f, rot_z + 90);
		Transform_t3275118058 * L_26 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_27 = V_3;
		// transform.rotation = Quaternion.Euler(0f, 0f, rot_z + 90);
		Quaternion_t4030073918  L_28 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), (0.0f), ((float)((float)L_27+(float)(90.0f))), /*hidden argument*/NULL);
		// transform.rotation = Quaternion.Euler(0f, 0f, rot_z + 90);
		NullCheck(L_26);
		Transform_set_rotation_m3411284563(L_26, L_28, /*hidden argument*/NULL);
	}

IL_00e3:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
