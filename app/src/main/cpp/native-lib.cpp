#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_rabiielbeji_helloworld_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello Rabii from C++";
    return env->NewStringUTF(hello.c_str());
}
