#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, ".UTF-8");

    int n;
    cout << "Введите количество элементов: ";
    
    while (!(cin>>n) || n < 0) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ты дурак? Количество не может быть отрицательным. Минус убери. Ввoди: ";
    }

    int a[1000];
    cout << "Введите " << n << " целых чисел: ";
    
    int k;
    for (int i=0; i < n; ++i) cin >> a[i];
    cout << "Введите целое число k: ";
    cin >> k;
    
    for (int i=0; i < n; ++i){
        for (int j=0; j < n; ++j){
            if (a[i] + a[j] == k){
                cout << "Индексы найденной пары: " << i << " и " << j << "\n";
                cout << a[i] << " + " << a[j] << " = " << k << '\n';

                return 0;
            }
        }
    }

    cout << "Пара с заданной суммой не существует.\n";

    return 0;
}