#include <iostream>
#include <iomanip>
#include <cmath>
#include <clocale>
#include <windows.h>

    
int main(){
   SetConsoleOutputCP(CP_UTF8);
   std::setlocale(LC_ALL, ".UTF-8");

   double a, b;
   std::cout << "Введите первое число: ";
   std::cin >> a;
   std::cout << "Введите второе число: ";
   std::cin >> b;

   std::cout << std::fixed << std::setprecision(2);
   std::cout << "Сумма: " << a + b << "\n";
   std::cout << "Разность: " << a - b << "\n";
   std::cout << "Произведение: " << a * b << "\n";
   std::cout << "Деление: " << a / b << "\n";
   std::cout << "Целочисленное деление: " 
             << static_cast<int>(a) / static_cast<int>(b) << "\n";
   std::cout << "Остаток: " << std::fmod(a, b) << "\n";
   std::cout << "Степень: " << std::pow(a, b) << "\n";

    return 0;
}