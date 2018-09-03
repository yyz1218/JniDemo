//
// Created by asus on 2018/9/3.
//
#include <string.h>
#include <jni.h>
#include "JniTest.h"
JNIEXPORT jstring JNICALL Java_com_yyz_test_jnidemo_JniTest_getHello
  (JNIEnv *env, jobject object){

    return (*env)->NewStringUTF(env,"hello world From C");
  }
