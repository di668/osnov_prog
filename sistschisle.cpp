#include <iostream>
#include <string>   
#include <charconv>


int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");
    
    int x;
    char buffer[64];

    std::cout << "Введите целое неотрицательное число: ";
    std::cin >> x;

    auto [ptr, ec] = std::to_chars(buffer, buffer + sizeof(buffer), x, 2);
    if (ec == std::errc()) {
        std::string b(buffer, ptr - buffer);
        std::cout << "В двоичной сс: " << b << "\n";
    }

    std::cout << "В восьмиричной сс: " << std::oct << x << "\n";
    std::cout << "В шестнадцатиричной сс: " << std::hex << x << "\n";

    return 0;

}
