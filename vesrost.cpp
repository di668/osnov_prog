#include <iostream>   
#include <iomanip>   

int main() {

    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    double ves;    
    double rost;     
    double imt;        

    std::cout << "Введите ваш вес в килограммах: ";
    std::cin >> ves;

    std::cout << "Введите ваш рост в метрах: ";
    std::cin >> rost;

    if (rost <= 0) {
        std::cerr << "Ошибка: рост должен быть положительным числом!" << std::endl;
        return 1;      
    }

    imt = ves / (rost * rost);

    std::cout << std::fixed << std::setprecision(1);

    std::cout << "Ваш индекс массы тела (ИМТ): " << imt << std::endl;

    return 0;          
}
