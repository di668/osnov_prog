#include <iostream> 
#include <string>
using namespace std;

string Caesar(string text, int shift) {
    shift = ((shift % 26) + 26 ) % 26;

    for (int i = 0; i < text.length(); i++){
        char c = text[i];
        if (c >= 'a' && c <= 'z'){
            text[i] = 'a' + (c - 'a' + shift)%26;
        }
        else if (c >= 'A' && c <= 'Z'){
            text[i] = 'A' + (c - 'A' + shift)%26;
        }
    }
    return text;
}

string dCaeser(string text, int shift){
    return Caesar(text, -shift);
}

int main(){
    setlocale(LC_ALL, ".UTF-8");
    string txt = "";
    cout << "Введите текст(ТОЛЬКО НА АНГЛИЙСКОМ): ";
    getline(cin, txt);

    string shifr =  Caesar(txt, 3);
    cout << "Ваш зашифрованный текст: " << shifr << endl;

    string xtx = "";
    cout << "Расшифровка: Скопируйте зашифрованный текст: ";
    getline(cin,xtx);

    string paf = dCaeser(xtx, 3);
    cout << "Ваш расшифрованный текст: " << paf << endl;

    return 0;
}