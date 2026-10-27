#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
using namespace std;

int main(){
    setlocale(LC_ALL, ".UTF-8");
    const int N = 1000000;

    random_device rd;
    mt19937 gen(rd());
    vector<int> massiv(N);

    generate(massiv.begin(), massiv.end(), [&](){
        return
        uniform_int_distribution<>(-500, 500)(gen);
    });

    int k;
    cout << "Введите k(сумму чисел): ";

    while(!(cin>>k)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Дурак! Число введи! Целое! Хоть с +, хоть с -. Вводи: ";
    }

    for (int i = 0; i < N; ++i){
        for (int j = i + 1; j < N; ++j){
            if (massiv[i] + massiv[j] == k) {
                cout << "Пара найдена! Индексы: " << i << " и " << j << "\n";
                cout << massiv[i] << " + " << massiv[j] << " = " << k << '\n';

                return 0;
            }
        }
    }

    cout << "Пар с суммой " << k << " нет в массиве)" << '\n';
    return 0;
}