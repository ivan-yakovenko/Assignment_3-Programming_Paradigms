#include <iostream>

using namespace std;

extern "C" {
char *encrypt(char* rawText, int key);
char *decrypt(char *encryptedText, int key);
}

int main() {
    char text[] = "Roses are red, violets are blue";
    char *encryptedText = encrypt(text, 1);
    cout << "Encrypted text: " << encryptedText << endl;

    char *decryptedText = decrypt(encryptedText, 1);
    cout << "Decrypted text: " << decryptedText << endl;

    return 0;
}