// DLL_JNI_Demo.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "jnidemo_NativeImplementation.h"





int add(int a, int b)
{
	return (a + b);
}

int multiply(int a, int b)
{
	return (a * b);
}

JNIEXPORT jint JNICALL Java_jnidemo_NativeImplementation_add
(JNIEnv *env, jobject obj, jint a, jint b)
{
	return add(a, b);
}

JNIEXPORT jint JNICALL Java_jnidemo_NativeImplementation_multiply
(JNIEnv *env, jobject obj, jint a, jint b)
{
	return multiply(a, b);
}
