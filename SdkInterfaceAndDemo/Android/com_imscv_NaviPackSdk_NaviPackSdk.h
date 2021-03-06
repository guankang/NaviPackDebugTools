#ifndef _Included_com_imscv_NaviPackSdk_NaviPackSdk
#define _Included_com_imscv_NaviPackSdk_NaviPackSdk
#ifndef NAVIPACK_WIN
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_imscv_NaviPackSdk_NaviPackSdk */

#ifdef __cplusplus
extern "C" {
#endif
#undef com_imscv_NaviPackSdk_NaviPackSdk_VERBOSE
#define com_imscv_NaviPackSdk_NaviPackSdk_VERBOSE 0L
/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1init
  (JNIEnv *, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getSdkVerson
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getSdkVerson
  (JNIEnv *, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_create
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1create
  (JNIEnv *, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_destroy
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1destroy
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_open
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1open
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_reopen
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1reopen
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1close
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getCarrierParam
 * Signature: (ILcom/imscv/NaviPackSdk/data/CarrierParam;)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getCarrierParam
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_setCarrierParam
 * Signature: (ILcom/imscv/NaviPackSdk/data/CarrierParam;)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1setCarrierParam
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getNaviPackParam
 * Signature: (ILcom/imscv/NaviPackSdk/data/NaviPackParam;)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getNaviPackParam
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_setNaviPackParam
 * Signature: (ILcom/imscv/NaviPackSdk/data/NaviPackParam;)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1setNaviPackParam
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_setTargets
 * Signature: (I[I[II)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1setTargets
  (JNIEnv *, jobject, jint, jintArray, jintArray, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getCurrentPath
 * Signature: (I[I[I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getCurrentPath
  (JNIEnv *, jobject, jint, jintArray, jintArray);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_setSpeed
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1setSpeed
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_autoCharge
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1autoCharge
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_setChargerPosition
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1setChargerPosition
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_startMapping
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1startMapping
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_stopMapping
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1stopMapping
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getMapList
 * Signature: (I[I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getMapList
  (JNIEnv *, jobject, jint, jintArray);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_loadMap
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1loadMap
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_loadLocalMap
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1loadLocalMap
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getMapLayer
 * Signature: (ILcom/imscv/NaviPackSdk/data/AlgMapData;I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getMapLayer
  (JNIEnv *, jobject, jint, jobject, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_setMapLayer
 * Signature: (ILcom/imscv/NaviPackSdk/data/AlgMapData;I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1setMapLayer
  (JNIEnv *, jobject, jint, jobject, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getSensorData
 * Signature: (ILcom/imscv/NaviPackSdk/data/AlgSensorData;II)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getSensorData
  (JNIEnv *, jobject, jint, jobject, jint, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getStatus
 * Signature: (ILcom/imscv/NaviPackSdk/regParam/AlgStatusReg;)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getStatus
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_initLocation
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1initLocation
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_setWiFiParam
 * Signature: (ILjava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1setWiFiParam
  (JNIEnv *, jobject, jint, jstring, jstring);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_searchDevice
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1searchDevice
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_checkConnection
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1checkConnection
  (JNIEnv *, jobject);

/*
 * Class:     com_imscv_NaviPackSdk_NaviPackSdk
 * Method:    native_getAlgMapData
 * Signature: (II)Lcom/imscv/NaviPackSdk/data/AlgMapData;
 */
JNIEXPORT jobject JNICALL Java_com_imscv_NaviPackSdk_NaviPackSdk_native_1getAlgMapData
  (JNIEnv *, jobject, jint, jint);

#ifdef __cplusplus
}
#endif
#endif

#endif