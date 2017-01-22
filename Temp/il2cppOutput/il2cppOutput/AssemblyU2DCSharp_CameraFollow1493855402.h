﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// System.Single CameraFollow::xMargin
	float ___xMargin_2;
	// System.Single CameraFollow::yMargin
	float ___yMargin_3;
	// System.Single CameraFollow::xSmooth
	float ___xSmooth_4;
	// System.Single CameraFollow::ySmooth
	float ___ySmooth_5;
	// UnityEngine.Vector2 CameraFollow::maxXAndY
	Vector2_t2243707579  ___maxXAndY_6;
	// UnityEngine.Vector2 CameraFollow::minXAndY
	Vector2_t2243707579  ___minXAndY_7;
	// UnityEngine.Transform CameraFollow::player
	Transform_t3275118058 * ___player_8;

public:
	inline static int32_t get_offset_of_xMargin_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___xMargin_2)); }
	inline float get_xMargin_2() const { return ___xMargin_2; }
	inline float* get_address_of_xMargin_2() { return &___xMargin_2; }
	inline void set_xMargin_2(float value)
	{
		___xMargin_2 = value;
	}

	inline static int32_t get_offset_of_yMargin_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___yMargin_3)); }
	inline float get_yMargin_3() const { return ___yMargin_3; }
	inline float* get_address_of_yMargin_3() { return &___yMargin_3; }
	inline void set_yMargin_3(float value)
	{
		___yMargin_3 = value;
	}

	inline static int32_t get_offset_of_xSmooth_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___xSmooth_4)); }
	inline float get_xSmooth_4() const { return ___xSmooth_4; }
	inline float* get_address_of_xSmooth_4() { return &___xSmooth_4; }
	inline void set_xSmooth_4(float value)
	{
		___xSmooth_4 = value;
	}

	inline static int32_t get_offset_of_ySmooth_5() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___ySmooth_5)); }
	inline float get_ySmooth_5() const { return ___ySmooth_5; }
	inline float* get_address_of_ySmooth_5() { return &___ySmooth_5; }
	inline void set_ySmooth_5(float value)
	{
		___ySmooth_5 = value;
	}

	inline static int32_t get_offset_of_maxXAndY_6() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___maxXAndY_6)); }
	inline Vector2_t2243707579  get_maxXAndY_6() const { return ___maxXAndY_6; }
	inline Vector2_t2243707579 * get_address_of_maxXAndY_6() { return &___maxXAndY_6; }
	inline void set_maxXAndY_6(Vector2_t2243707579  value)
	{
		___maxXAndY_6 = value;
	}

	inline static int32_t get_offset_of_minXAndY_7() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___minXAndY_7)); }
	inline Vector2_t2243707579  get_minXAndY_7() const { return ___minXAndY_7; }
	inline Vector2_t2243707579 * get_address_of_minXAndY_7() { return &___minXAndY_7; }
	inline void set_minXAndY_7(Vector2_t2243707579  value)
	{
		___minXAndY_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___player_8)); }
	inline Transform_t3275118058 * get_player_8() const { return ___player_8; }
	inline Transform_t3275118058 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Transform_t3275118058 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier(&___player_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
