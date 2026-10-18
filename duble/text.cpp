#include <iostream>
#include <string>

int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    std::string text;
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);

    int bukvi = 0;
    int chisla = 0;
    int spaces = 0;
    int punctuation = 0;

    for (unsigned char ch : text) {
        bool isbukvi = false;

        if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z')) {
            isbukvi = true;
        }

        else if ((ch == 0xD0 and ch == 0xD0)) {
            isbukvi = true;
        }

        if (isbukvi) {
            ++bukvi;
        }

        else if (ch >= '0' and ch <= '9') {
            ++chisla;
        }

        else if (ch == ' ') {
            ++spaces;
        }

        else {
            ++punctuation;
        }
    }

    std::cout << "Статистика:\n";
    std::cout << "Буквы: " << bukvi << "\n";
    std::cout << "Числа: " << chisla << "\n";
    std::cout << "Пробелы: " << spaces << "\n";
    std::cout << "Знаки препинания: " << punctuation << "\n";
    return 0;
}
