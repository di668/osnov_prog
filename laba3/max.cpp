#include <iostream>
#include <algorithm>
using namespace std;

int maxOfThree(int a, int b, int c) {
    return max(a, max(b, c));
}

int main(){
    setlocale(LC_ALL, ".UTF-8");
    
    int x;
    cout << "Введите целое число а: ";

    while(!(cin >> x)){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Лох. Целое число просят вобще-то. Вводи: ";
    }

    int y;
    cout << "Введите целое число b: ";

    while(!(cin >> y)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Лох. Целое число просят вобще-то. Вводи: ";
    }

    int z;
    cout << "Введите целое число c: ";

    while(!(cin >> z)){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Лох. Целое число просят вобще-то. Вводи: ";
    }

    cout << "Максимальное из " << x << ", " << y << ", " << z << ":" << '\n';
    cout << maxOfThree(x, y, z) << '\n';

    return 0;

}