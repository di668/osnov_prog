#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main(){

    setlocale(LC_ALL, ".UTF-8");
    int matrix[10][10] = {
        {9,9,9,9,9,9,9,9,9,9},
        {9,1,9,9,9,9,9,8,9,9},
        {9,9,9,9,9,9,9,9,9,9},
        {9,9,9,9,9,9,9,9,9,9},
        {9,9,9,3,9,9,9,9,9,9},
        {9,9,9,9,9,9,9,9,9,9},
        {9,9,9,9,9,9,9,9,9,9},
        {9,9,9,9,9,9,9,2,9,9},
        {9,9,9,9,9,9,9,9,9,9},
        {9,9,9,9,9,9,9,9,9,9}
    };
    
int resultI[100];   
int resultJ[100];   
int resultVal[100]; 
int count = 0;      


for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {

        bool isMin = true; 
        for (int di = -1; di <= 1; di++) {
            for (int dj = -1; dj <= 1; dj++) {
                if (di == 0 && dj == 0) continue; 

                int ni = i + di;
                int nj = j + dj;
                if (ni >= 0 && ni < 10 && nj >= 0 && nj < 10) {
                    if (matrix[ni][nj] <= matrix[i][j]) {
                        isMin = false;
                        break; 
                    }
                }
            }
            if (!isMin) break; 
        }
        if (isMin) {
            resultI[count] = i;
            resultJ[count] = j;
            resultVal[count] = matrix[i][j];
            count++;
        }
    }
}

cout << "Найдено локальных минимумов: " << count << '\n';

if (count == 0) {
    cout << "Таких точек нет.\n";
} else {
    cout << "№ | Строка | Столбец | Значение\n";
    cout << "--+--------+---------+---------\n";
    for (int k = 0; k < count; k++) {
        cout << k + 1 << " |   (" << resultI[k] 
             << "    |    " << resultJ[k] 
             << ")    |    " << resultVal[k] << "\n";
    }
}

return 0;
    return 0;
}