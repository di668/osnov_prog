#include <iostream>

int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    int day;
    int month;
    int year;
    int xday;
    int xmonth;
    int xyear;

    std::cout << "Введите день своего рождения: ";
    std::cin >> day;

    std::cout << "Введите месяц своего рождения: ";
    std::cin >> month;

    std::cout << "Введите год своего рождения: ";
    std::cin >> year;

    std::cout << "Введите текущий день(число): ";
    std::cin >> xday;

    std::cout << "Введите текущий месяц: ";
    std::cin >> xmonth;

    std::cout << "Введите текущий год: ";
    std::cin >> xyear;

    int age = xyear - year -1;

    if (month < xmonth) {
        age += 1;
    }
    else if (month == xmonth) {
        if (day < xday) {
            age += 1;
        }
    }

    std::cout << "Ваш возраст: " << age << "\n";

    return 0;
}