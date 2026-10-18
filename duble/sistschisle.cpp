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
        std::string bin(buffer, ptr - buffer);
        std::cout << "В двоичной сс: " << bin << "\n";
    }

    auto[bef, prob] = std::to_chars(buffer, buffer+sizeof(buffer), x, 8);
    if (prob == std::errc()) {
        std::string oct(buffer, bef - buffer);
        std::cout << "В восьмиричной сс: " << oct << "\n";
    }
    
    auto[con, osh] = std::to_chars(buffer, buffer + sizeof(buffer), x, 16);
    if (osh == std::errc()) {
        std::string hex(buffer, con - buffer);
        std::cout << "В шестнадцатиричной сс: " << hex << "\n";
    }
    

    return 0;

}
