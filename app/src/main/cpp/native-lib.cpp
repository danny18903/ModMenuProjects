#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_modmenu_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Mod Menu Antena - Activo";
    return env->NewStringUTF(hello.c_str());
}

