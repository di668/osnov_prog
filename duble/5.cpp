#include <iostream>
#include <string>   

using namespace std;

string toBase(int x, int base){
    if (x == 0) {
        return "0";
    }
    const char digits[] = "0123456789ABCDEF";
    string result;
    bool minus = false;

    unsigned int un;
    if (x < 0){
        minus = true;
        un = static_cast<unsigned int>(-(long long) x);
    }
    else{
        un = static_cast<unsigned int>(x);
    }

    while (un > 0){
        result = digits[un%base] + result;
        un /= base;
    }
    return minus ? "-" + result : result;
}

int main(){
    setlocale(LC_ALL, ".UTF-8");

    int num;
    cout << "Введите целое число: ";
    
    while (!(cin>>num)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ты дурак? Читать научись. ЦЕЛОЕ число. Ввoди: ";
    }
    
    cout << "Двоичная: " << toBase(num, 2) << "\n";
    cout << "Восьмеричная: " << toBase(num, 8) << "\n";
    cout << "Шестнадцатеричная: " << toBase(num, 16) << "\n";

    return 0;
}

