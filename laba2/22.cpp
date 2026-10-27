#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    setlocale(LC_ALL, ".UTF-8");

    vector<int>massiv={1,23,12,343,53,41,6234,34,535,12-4,-34,0,-12,-23};
    sort(massiv.begin(),massiv.end());

    int k;
    cout << "Какой элемент хотите ввывести? Введите одно целое неотрицательное число до " << massiv.size() << ": ";
    while (!(cin>>k) || k < 0 || k > massiv.size()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Ты дурак? Читать научись. Одно целое НЕОТРИЦАТЕЛЬНОЕ ЧИСЛО НЕБОЛЬШЕ " << massiv.size() << ". НА КЛАВЕ СВОЕЙ ЦИФЕРКИ МЕНЬШЕ " << massiv.size() << " НАЙДИ. Ввoди: ";
    }

    cout << k << " элемент равен: " << massiv[k-1] << '\n';

    return 0;
    
}