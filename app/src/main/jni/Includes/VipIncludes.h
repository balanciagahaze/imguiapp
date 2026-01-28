#ifndef UTILS
#define UTILS

#include <jni.h>
#include <unistd.h>
#include <cstdio>
#include <cstring>
#include <string>
#include <cstdlib>
#include "Logger.h"
#include "obfuscate.h"
static uintptr_t libBase;

bool libLoaded = false;

DWORD findLibrary(const char *library) {
    char filename[0xFF] = {0},
            buffer[1024] = {0};
    FILE *fp = NULL;
    DWORD address = 0;

    sprintf(filename, OBFUSCATE("/proc/self/maps"));

    fp = fopen(filename, OBFUSCATE("rt"));
    if (fp == NULL) {
        perror(OBFUSCATE("fopen"));
        goto done;
    }

    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strstr(buffer, library)) {
            address = (DWORD) strtoul(buffer, NULL, 16);
            goto done;
        }
    }

    done:

    if (fp) {
        fclose(fp);
    }

    return address;
}

jboolean isGameLibLoaded(JNIEnv *env, jobject thiz) {
    return libLoaded;
}

bool isLibraryLoaded(const char *libraryName) {
    //libLoaded = true;
    char line[512] = {0};
    FILE *fp = fopen(OBFUSCATE("/proc/self/maps"), OBFUSCATE("rt"));
    if (fp != NULL) {
        while (fgets(line, sizeof(line), fp)) {
            std::string a = line;
            if (strstr(line, libraryName)) {
                libLoaded = true;
                return true;
            }
        }
        fclose(fp);
    }
    return false;
}

uintptr_t string2Offset(const char *c) {
    int base = 16;
    // See if this function catches all possibilities.
    // If it doesn't, the function would have to be amended
    // whenever you add a combination of architecture and
    // compiler that is not yet addressed.
    static_assert(sizeof(uintptr_t) == sizeof(unsigned long)
                  || sizeof(uintptr_t) == sizeof(unsigned long long),
                  "Please add string to handle conversion for this architecture.");

    // Now choose the correct function ...
    if (sizeof(uintptr_t) == sizeof(unsigned long)) {
        return strtoul(c, nullptr, base);
    }

    // All other options exhausted, sizeof(uintptr_t) == sizeof(unsigned long long))
    return strtoull(c, nullptr, base);
}

#endif

#include <fstream>
#include "includes/base64.hpp"
const char *libName = OBFUSCATE("libil2cpp.so"); //Default target lib is Il2Cpp

void MakeToast(JNIEnv *env, jobject thiz, const char *text, int length) {
    //Add our toast in here so it wont be easy to change by simply editing the smali and cant
    //be cut out because this method is needed to start the hack (Octowolve is smart)
    jstring jstr = env->NewStringUTF(text); //Edit this text to your desired toast message!
    jclass toast = env->FindClass(OBFUSCATE("android/widget/Toast"));
    jmethodID methodMakeText =
            env->GetStaticMethodID(
                    toast,
                    OBFUSCATE("makeText"),
                    OBFUSCATE(
                            "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;"));
    if (methodMakeText == NULL) {
        LOGE(OBFUSCATE("toast.makeText not Found"));
        return;
    }
    //The last int is the length on how long the toast should be displayed
    //0 = Short, 1 = Long
    jobject toastobj = env->CallStaticObjectMethod(toast, methodMakeText,
                                                   thiz, jstr, length);

    jmethodID methodShow = env->GetMethodID(toast, OBFUSCATE("show"), OBFUSCATE("()V"));
    if (methodShow == NULL) {
        LOGE(OBFUSCATE("toast.show not Found"));
        return;
    }
    env->CallVoidMethod(toastobj, methodShow);
}

void writeToFile(std::string dir, std::string buf) {
    //LOGD("load sounds %s", dir.c_str());
    std::ifstream myfile(dir);
    if (!myfile.is_open()) {
        std::ofstream os(dir.c_str(), std::ios::trunc);
        os.write(buf.c_str(), buf.length());
        os.close();
    }
}

// thanks to shmoo and joeyjurjens for the usefull stuff under this comment.
#ifndef ANDROID_MOD_MENU_MACROS_H
#define ANDROID_MOD_MENU_MACROS_H

#if defined(__aarch64__) //Compile for arm64 lib only
#include <Substrate/And64InlineHook.hpp>

#else //Compile for armv7 lib only. Do not worry about greyed out highlighting code, it still works
#include <Substrate/SubstrateHook.h>
#include <Substrate/CydiaSubstrate.h>

#endif

void hook(void *offset, void* ptr, void **orig)
{
#if defined(__aarch64__)
    A64HookFunction(offset, ptr, orig);
#else
    MSHookFunction(offset, ptr, orig);
#endif
}

#define HOOK2(offset, ptr, orig) hook((void *)getAbsoluteAddress(targetLibName, string2Offset(OBFUSCATE(offset))), (void *)ptr, (void **)&orig)
#define HOOK_LIB(lib, offset, ptr, orig) hook((void *)KittyMemory::getAbsoluteAddress(OBFUSCATE(lib), string2Offset(OBFUSCATE(offset))), (void *)ptr, (void **)&orig)

#define HOOK_NO_ORIG(offset, ptr) hook((void *)getAbsoluteAddress(targetLibName, string2Offset(OBFUSCATE(offset))), (void *)ptr, NULL)
#define HOOK_LIB_NO_ORIG(lib, offset, ptr) hook((void *)getAbsoluteAddress(OBFUSCATE(lib), string2Offset(OBFUSCATE(offset))), (void *)ptr, NULL)

#define HOOKSYM(sym, ptr, org) hook(dlsym(dlopen(targetLibName, 4), OBFUSCATE(sym)), (void *)ptr, (void **)&org)
#define HOOKSYM_LIB(lib, sym, ptr, org) hook(dlsym(dlopen(OBFUSCATE(lib), 4), OBFUSCATE(sym)), (void *)ptr, (void **)&org)

#define HOOKSYM_NO_ORIG(sym, ptr)  hook(dlsym(dlopen(targetLibName, 4), OBFUSCATE(sym)), (void *)ptr, NULL)
#define HOOKSYM_LIB_NO_ORIG(lib, sym, ptr) hook(dlsym(dlopen(OBFUSCATE(lib), 4), OBFUSCATE(sym)), (void *)ptr, NULL)

std::vector<MemoryPatch> memoryPatches;
std::vector<uint64_t> offsetVector;

// Patching a offset without switch.
void patchOffset(const char *fileName, uint64_t offset, std::string hexBytes, bool isOn) {

    MemoryPatch patch = MemoryPatch::createWithHex(fileName, offset, hexBytes);

    //Check if offset exists in the offsetVector
    if (std::find(offsetVector.begin(), offsetVector.end(), offset) != offsetVector.end()) {
        //LOGE(OBFUSCATE("Already exists"));
        std::vector<uint64_t>::iterator itr = std::find(offsetVector.begin(), offsetVector.end(), offset);
        patch = memoryPatches[std::distance(offsetVector.begin(), itr)]; //Get index of memoryPatches vector
    } else {
        memoryPatches.push_back(patch);
        offsetVector.push_back(offset);
        //LOGI(OBFUSCATE("Added"));
    }

    if (!patch.isValid()) {
        LOGE(OBFUSCATE("Failing offset: 0x%llu, please re-check the hex"), offset);
        return;
    }
    if (isOn) {
        if (!patch.Modify()) {
            LOGE(OBFUSCATE("Something went wrong while patching this offset: 0x%llu"), offset);
        }
    } else {
        if (!patch.Restore()) {
            LOGE(OBFUSCATE("Something went wrong while restoring this offset: 0x%llu"), offset);
        }
    }
}

void patchOffsetSym(uintptr_t absolute_address, std::string hexBytes, bool isOn) {

    MemoryPatch patch = MemoryPatch::createWithHex(absolute_address, hexBytes);

    //Check if offset exists in the offsetVector
    if (std::find(offsetVector.begin(), offsetVector.end(), absolute_address) != offsetVector.end()) {
        //LOGE(OBFUSCATE("Already exists"));
        std::vector<uint64_t>::iterator itr = std::find(offsetVector.begin(), offsetVector.end(), absolute_address);
        patch = memoryPatches[std::distance(offsetVector.begin(), itr)]; //Get index of memoryPatches vector
    } else {
        memoryPatches.push_back(patch);
        offsetVector.push_back(absolute_address);
        //LOGI(OBFUSCATE("Added"));
    }

    if (!patch.isValid()) {
        LOGE(OBFUSCATE("Failing offset: 0x%llu, please re-check the hex"), absolute_address);
        return;
    }
    if (isOn) {
        if (!patch.Modify()) {
            LOGE(OBFUSCATE("Something went wrong while patching this offset: 0x%llu"), absolute_address);
        }
    } else {
        if (!patch.Restore()) {
            LOGE(OBFUSCATE("Something went wrong while restoring this offset: 0x%llu"), absolute_address);
        }
    }
}

#define PATCH(offset, hex) patchOffset(targetLibName, string2Offset(OBFUSCATE(offset)), OBFUSCATE(hex), true)
#define PATCH_LIB(lib, offset, hex) patchOffset(OBFUSCATE(lib), string2Offset(OBFUSCATE(offset)), OBFUSCATE(hex), true)

#define PATCH_SYM(sym, hex) patchOffset(dlsym(dlopen(targetLibName, 4), OBFUSCATE(sym)), OBFUSCATE(hex), true)
#define PATCH_LIB_SYM(lib, sym, hex) patchOffset(dlsym(dlopen(lib, 4), OBFUSCATE(sym)), OBFUSCATE(hex), true)

#define PATCH_SWITCH(offset, hex, boolean) patchOffset(targetLibName, string2Offset(OBFUSCATE(offset)), OBFUSCATE(hex), boolean)
#define PATCH_LIB_SWITCH(lib, offset, hex, boolean) patchOffset(OBFUSCATE(lib), string2Offset(OBFUSCATE(offset)), OBFUSCATE(hex), boolean)

#define PATCH_SYM_SWITCH(sym, hex, boolean) patchOffsetSym((uintptr_t)dlsym(dlopen(targetLibName, 4), OBFUSCATE(sym)), OBFUSCATE(hex), boolean)
#define PATCH_LIB_SYM_SWITCH(lib, sym, hex, boolean) patchOffsetSym((uintptr_t)dlsym(dlopen(lib, 4), OBFUSCATE(sym)), OBFUSCATE(hex), boolean)

#define RESTORE(offset) patchOffset(targetLibName, string2Offset(OBFUSCATE(offset)), "", false)
#define RESTORE_LIB(lib, offset) patchOffset(OBFUSCATE(lib), string2Offset(OBFUSCATE(offset)), "", false)

#define RESTORE_SYM(sym) patchOffsetSym((uintptr_t)dlsym(dlopen(targetLibName, 4), OBFUSCATE(sym)), "", false)
#define RESTORE_LIB_SYM(lib, sym) patchOffsetSym((uintptr_t)dlsym(dlopen(lib, 4), OBFUSCATE(sym)), "", false)

#endif //ANDROID_MOD_MENU_MACROS_H
