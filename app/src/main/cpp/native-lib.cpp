#include <jni.h>
#include <string>
#include "testAdd.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_paiconor_testndk_MainActivity_testAdd(JNIEnv *env, jobject instance, jint a,
                                                       jint b) {

    testAdd* p = new testAdd();
    int nResult = p->Add(a, b);
    delete p;
    return nResult;

}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_paiconor_testndk_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
