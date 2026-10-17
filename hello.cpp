#include <iostream>
#include <string>
#include <typeinfo>
#include <clocale>
#include <windows.h>

int display(int count, char sym_to_count) {
    for (int i; i < count; i++) {
        std::cout << sym_to_count;
    }

    return 0;
}

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    std::setlocale(LC_ALL, ".UTF-8");
    
    int a[5] = {100,6,8,4,2};
    int b['Q'] = {2,3,4,5};
    int c[5] = {4,2,3,4,'C'};

    //int result = display(5, 'S');

    int min = 100000;
    int index;
    int result[5] = {};

    for (int k = 0; k < 5; k++) {
    
        for (int i = 0; i < 5; i++) {
            if(a[i] < min) {
                min = a[i];
                index = i;
            }
        }
        result[k] = min;
        a[index] = 100000;
        min = 100000;
    
    }
    
    for (int i = 0; i < 5; i++) {

        std::cout << result[i] << '\n';
    }

    std::cout << "ВСЁ!" << '\n';
/*
    for (int i = 0; i < 5; i++) {
        std::cout << a[i] << '\n';
    }

     for (int i = 0; i < 5; i++) {
        std::cout << b[i] << '\n';
    }
*/
    return 0;
}