# For more information about using CMake with Android Studio, read the
cmake_minimum_required(VERSION 3.4.1)
add_library( # Sets the name of the library.
# 设置so文件名称.
sayJni
# Sets the library as a shared library.
SHARED
# 设置这个so文件为共享.
# Provides a relative path to your source file(s).
# 设置这个so文件为共享.
src/main/jni/c_test.c)

find_library( # Sets the name of the path variable.
    log-lib
    # Specifies the name of the NDK library that
    # you want CMake to locate.
    log )

target_link_libraries( # Specifies the target library.
    # 制定目标库.
    sayJni
    # Links the target library to the log library
    # included in the NDK.
    ${log-lib} )