
#include <iostream>

int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    double a;
    int b;

    std::cout << "Введите число: ";
    std::cin >> a;
    std::cout << "Введите степень: ";
    std::cin >> b;

    if (a == 0.0 and b < 0) {
        std::cout << "Ошибка: нельзя возводить 0 в отрицательную степень.\n";
        return 1;
    }

    double result = 1.0;
    int plus = b;

    if (b < 0) {
        plus = -b;
    }

    for (int i = 0; i < plus; ++i) {
        result = result * a;
    }

    if (b < 0) {
        result = 1.0 / result;
    }

    std::cout << a << " в степени " << b << " = " << result << "\n";
    return 0; 
}
