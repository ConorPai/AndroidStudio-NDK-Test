#include <jni.h>
#include <string>
#include <dlfcn.h>
//#include "testAdd.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_paiconor_testndk_MainActivity_testAdd(JNIEnv *env, jobject instance, jint a,
                                                       jint b) {

    //模式1，通过dlopen动态调用so中的方法
    int nResult = 0;
    void* sohandle = dlopen("libtestAdd.so", RTLD_LAZY);
    if(sohandle != NULL)
    {
        typedef int (*CAC_FUNC)(int, int);
        CAC_FUNC cac_func = (CAC_FUNC)dlsym(sohandle, "testAdd");
        if( cac_func )
        {
            nResult = cac_func(a, b);
        }
        dlclose(sohandle);
    }

    //模式2，通过引用头文件调用so中的类和方法
    //testAdd* p = new testAdd();
    //int nResult = p->Add(a, b);
    //delete p;
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
