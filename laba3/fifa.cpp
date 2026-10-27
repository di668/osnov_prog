#include <iostream>
using namespace std;

int finabochi(int n){
    if (n < 0) return -1;
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev = 0;
    int curr = 1;
    for (int i = 2; i <= n; ++i){
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;
}

int main(){
    setlocale(LC_ALL, ".UTF-8");

    int kolvo;
    cout << "Введите количество чисел(число должно быть положительным): ";

    while(!(cin>>kolvo) || kolvo < 0){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Читай что в скобках написанно. Минус уберию Вводи: ";
    }

    cout << kolvo << "-ое число финабочи = " << finabochi(kolvo) << '\n';
    return 0;
}
