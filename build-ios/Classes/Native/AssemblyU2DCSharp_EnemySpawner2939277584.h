#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2939277584  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EnemySpawner::isSpawning
	bool ___isSpawning_2;
	// System.Single EnemySpawner::spawnTime
	float ___spawnTime_3;
	// System.Int32 EnemySpawner::spawnRadius
	int32_t ___spawnRadius_4;
	// System.Int32 EnemySpawner::minSpawnDistance
	int32_t ___minSpawnDistance_5;
	// UnityEngine.GameObject EnemySpawner::bomb
	GameObject_t1756533147 * ___bomb_6;
	// System.Single EnemySpawner::timeSinceLastEnemy
	float ___timeSinceLastEnemy_7;

public:
	inline static int32_t get_offset_of_isSpawning_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___isSpawning_2)); }
	inline bool get_isSpawning_2() const { return ___isSpawning_2; }
	inline bool* get_address_of_isSpawning_2() { return &___isSpawning_2; }
	inline void set_isSpawning_2(bool value)
	{
		___isSpawning_2 = value;
	}

	inline static int32_t get_offset_of_spawnTime_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnTime_3)); }
	inline float get_spawnTime_3() const { return ___spawnTime_3; }
	inline float* get_address_of_spawnTime_3() { return &___spawnTime_3; }
	inline void set_spawnTime_3(float value)
	{
		___spawnTime_3 = value;
	}

	inline static int32_t get_offset_of_spawnRadius_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___spawnRadius_4)); }
	inline int32_t get_spawnRadius_4() const { return ___spawnRadius_4; }
	inline int32_t* get_address_of_spawnRadius_4() { return &___spawnRadius_4; }
	inline void set_spawnRadius_4(int32_t value)
	{
		___spawnRadius_4 = value;
	}

	inline static int32_t get_offset_of_minSpawnDistance_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___minSpawnDistance_5)); }
	inline int32_t get_minSpawnDistance_5() const { return ___minSpawnDistance_5; }
	inline int32_t* get_address_of_minSpawnDistance_5() { return &___minSpawnDistance_5; }
	inline void set_minSpawnDistance_5(int32_t value)
	{
		___minSpawnDistance_5 = value;
	}

	inline static int32_t get_offset_of_bomb_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___bomb_6)); }
	inline GameObject_t1756533147 * get_bomb_6() const { return ___bomb_6; }
	inline GameObject_t1756533147 ** get_address_of_bomb_6() { return &___bomb_6; }
	inline void set_bomb_6(GameObject_t1756533147 * value)
	{
		___bomb_6 = value;
		Il2CppCodeGenWriteBarrier(&___bomb_6, value);
	}

	inline static int32_t get_offset_of_timeSinceLastEnemy_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2939277584, ___timeSinceLastEnemy_7)); }
	inline float get_timeSinceLastEnemy_7() const { return ___timeSinceLastEnemy_7; }
	inline float* get_address_of_timeSinceLastEnemy_7() { return &___timeSinceLastEnemy_7; }
	inline void set_timeSinceLastEnemy_7(float value)
	{
		___timeSinceLastEnemy_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
