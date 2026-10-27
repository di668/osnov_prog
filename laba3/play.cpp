#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateSecretNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

int getPlayerGuess(){
    setlocale(LC_ALL, ".UTF-8");
    int x;
    cout << "Ваш В=вариант: ";

    while (!(cin >> x)){
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Вы ввели букву вместо цифры. Введите свой вариант повторно: ";
    }
    return x;
}

void giveHint(int secret, int x){
    setlocale(LC_ALL, ".UTF-8");
    if (x < secret){
        cout << "Больше\n";
    } else if (x > secret) {
        cout << "Меньше\n";
    } else {
        cout << "Угадал!\n";
    }
}

int main() {
    setlocale(LC_ALL, ".UTF-8");
    srand(time(nullptr));

    char playAgain = 'y';
    cout << "=== Игра 'Угадай число' ===\n";

    while (playAgain == 'y' || playAgain == 'Y') {
        int min, max;
        cout << "\nВведите минимальную границу диапазона: ";
        cin >> min;
        cout << "Введите максимальную границу диапазона: ";
        cin >> max;

    if (min > max) {
        cout << "Границы перепутаны, поменяю местами.\n";
        swap(min, max);
    }
    if (min == max) {
        cout << "Диапазон слишком узкий, расширю до "
                  << min << ".." << min + 10 << "\n";
        max = min + 10;
    }

    int secret = generateSecretNumber(min, max);
    int attempts = 0;
    bool guessed = false;

    cout << "Я загадал число от " << min << " до " << max
              << ". Попробуйте угадать!\n";

    while (!guessed) {
        int guess = getPlayerGuess();
        attempts++;

        if (guess == secret) {
            giveHint(secret, guess);
            std::cout << "Вы угадали число " << secret
                      << " за " << attempts << " попыток!\n";
            guessed = true;
        } else {
            giveHint(secret, guess);
        }
    }

    cout << "\nСыграть ещё раз? (y/n): ";
    cin >> playAgain;
}

    cout << "Спасибо за игру! До встречи.\n";
    return 0;
}