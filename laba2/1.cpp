#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    setlocale(LC_ALL, ".UTF-8");

    int size;
    cout << "Введите размер массива(число): ";
    cin >> size;

    int x;
    vector<int>arr(size);

    for (int i = 0; i < size; ++i) {
        while (true) {
            cout << "Вветите " << i+1 << " элемент(ЧИСЛО): ";
            if (cin >> arr[i]) {
                break;
            }
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ты дурак? Читать научись. ЧИСЛО. Ввoди: ";
        }
    
    }

    sort(arr.begin(), arr.end());

    cout << "Ваш отсортированный массив: ";
    for (int x : arr) cout << x << ' ';
    cout << '\n';

    return 0;
}