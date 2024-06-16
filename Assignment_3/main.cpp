#include <iostream>
using namespace std;

char* encrypt(char* rawText, int key) {
    for(int i = 0; i < strlen(rawText); i++) {
        if(isupper(rawText[i])) {
            rawText[i] = char(int((rawText[i] - 'A' + key + 26) % 26 + 'A'));
        }
        else if(islower(rawText[i])) {
            rawText[i] = char(int((rawText[i] - 'a' + key + 26) % 26 + 'a'));
        }
    }
    return rawText;
}

int main() {
    cout << "Enter text to encrypt: ";
    char *text = new char[256];
    cin.getline(text, 256);
    cout << "Enter the encryption key: ";
    int key;
    cin >> key;
    cout << encrypt(text, key);
}




