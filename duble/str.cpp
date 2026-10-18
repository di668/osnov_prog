#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <clocale>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::setlocale(LC_ALL, ".UTF-8");

    std::string text;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);

    std::cout << "Длина: " << text.length() << "\n";

    //Верхний регистр
    std::string upper = text;
    std::transform(upper.begin(), upper.end(), upper.begin(),
                   [](unsigned char c) {return std::toupper(c);});
    std::cout << "Верхний регистр: " << upper << "\n";

    //Нижний регистр
    std::string lower = text;
    std::transform(lower.begin(), lower.end(), lower.begin(),
                   [](unsigned char c) {return std::tolower(c);});
    std::cout << "Нижний регистр: " << lower << "\n";

    std::cout << "Первый символ: " << text.front() << "\n";
    std::cout << "Второй символ: " << text.back() << "\n";

    //Подсчет пробелов
    int spaces = std::count(text.begin(), text.end(), ' ');
    std::cout << "Количество пробелов: " << spaces << "\n";

    return 0;
}