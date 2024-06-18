//#include <iostream>
//#include <dlfcn.h>
//using namespace std;
//
//extern "C" {
//    typedef char* (*encrypt_func)(char*, int);
//    typedef char* (*decrypt_func)(char*, int);
//}
//
//int main() {
//    void* handle = dlopen("./mylib.so", RTLD_LAZY);
//
//    if(!handle) {
//        cout << "Error" << dlerror() << endl;
//        return 1;
//    }
//
//    encrypt_func encrypt = reinterpret_cast<encrypt_func>(dlsym(handle, "encrypt"));
//    if(!encrypt) {
//        cout << "Error with encrypt" << dlerror() << endl;
//        return 1;
//    }
//
//    decrypt_func decrypt = reinterpret_cast<encrypt_func>(dlsym(handle, "decrypt"));
//    if(!decrypt) {
//        cout << "Error with decrypt" << dlerror() << endl;
//        return 1;
//    }
//
//    char text[] = "Roses are red, violets are blue";
//    char* encryptedText = encrypt(text, 2);
//    cout << "Encrypted text: " << encryptedText << endl;
//
//    char* decryptedText = decrypt(encryptedText, 2);
//    cout << "Decrypted text: " << decryptedText << endl;
//
//    dlclose(handle);
//    return 0;
//
//}
//
//
//
//
//
