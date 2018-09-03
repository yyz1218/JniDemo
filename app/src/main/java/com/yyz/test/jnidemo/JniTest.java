package com.yyz.test.jnidemo;

public class JniTest {
    static {
        System.loadLibrary("sayJni");//导入生成的链接库文件
    }
    public static  native String getHello();
}
