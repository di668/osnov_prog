#include <iostream>
using namespace std;

double canculate(double a, double b, char op){
    double result;
    
    if (op == '+'){
        result = a + b;
    }
    if (op == '-'){
        result = a - b;
    }
    if (op == '*'){
        result = a * b;
    }
    if (op == '/'){
        result = a / b;
    }

    return result;
}

int main(){
    setlocale(LC_ALL, ".UTF-8");

    double x;
    cout << "Введите число a: ";

    while(!(cin>>x)){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Число, дурачье. Вводи: ";
    }

    double y;
    cout << "Введите число b: ";

    while(!(cin >> y)){
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Сщвсем дурак что ли? Число! Вводи: ";
    }

    char po;
    cout << "Введите желаемый знак из(+, -, *, /): ";
    cin >> po;

    if(po == '+' || po == '-' || po == '*' || po == '/'){
        cout << x << " " << po << " " << y << " = " << canculate(x, y, po) << '\n';
        return 0;
    }

    cout << "Ты дурак!" << '\n';
    return 0;
}