#include <iostream>
#include <clocale>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    
    char text[1000];

    std:: cout << "Введите текст: ";
    std::cin.getline(text, 1000);

    int l = 0;
    while (text[l] != '\0') {
        ++l;
    }

    if (l == 0){
        std::cout << "Нечего выводить." << "\n";
        return 0;
    }

    int k;
    std::cout << "Введите порядковый номер k (от 1 до " << l << "): ";
    std::cin >> k;

    if (k < 1 or k > l) {
        std::cout << "Ошибка: k выходит за пределы ткста." << "\n";
        return 0;
    }

    std::cout << "Символ под номеров " << k << ": '" << text[k-1] << "'" << "\n";

    int m;
    std::cout << "Введите второй порядковый номер m ( от " << k << " до " << l << "): ";
    std::cin >> m;

    if (m < k or m > l) {
        std::cout << "Ошибка: m должно быть от " << k << " до " << l << "." << "\n";
        return 0;
    }

    std::cout << "Подстрока от " << k << " до " << m << ": ";
    for (int i = k-1; i <= m-1; ++i) {
        std::cout << text[i];
    }
    std::cout << "\n";

    return 0;

}