LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := sayJni
LOCAL_SRC_FILES := c_test.c
include $(BUILD_SHARED_LIBRARY)