#include <iostream>


int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    std::cout << "Введите правую границу диапазона (n): ";
    std:: cin >> n;

    if (n < 0) {
        std::cout << "В диапазоне от 0 до " << n << " нет неотрицательных чисел." << "\n";
        std::cout << "Сумма = 0" << "\n";
    }

    int sum = 0;
    int a = 0;

    while (a <= n) {
        if (a % 5 == 0) {
            sum += a;
        }
        ++a;
    }
    std::cout << "Сумма чисел от 0 до " << n << ", которые делятся на 5 нацело: " << sum << "\n";

    return 0;

}