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
    
    const int dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
    const int dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

    vector<tuple<int, int, int>> minima;
    
    for (int i=0; i<10; ++i){
        for (int j=0; j<10; ++j){
            bool isLocalMin = true;

            for(int k=0; k<8; ++k){
                int ni = i + dr[k];
                int nj = j + dc[k];

                if (ni < 0 || ni >= 10 || nj < 0 || nj >= 10) continue;

                if (matrix[ni][nj] <= matrix[i][j]) {
                    isLocalMin = false;
                    break;
                }
            }

            if (isLocalMin)
            minima.push_back(make_tuple(i, j, matrix[i][j]));
        }
    }

    cout << "Найдено локальных минимумов: " << minima.size() << '\n';
    if (minima.empty()) {
        cout << "ЛЩкальных минимумов нет.\n";
        return 0;
    }

    cout << " №  |  i (строка)  |  j (столбец)  |  значение \n";
    int num = 1;
    for (auto &m : minima) {
        int i, j, val;
        tie(i, j, val) = m;
        printf("%2d  |    (%2d    |    %2d )   |    %2d\n", num, i, j, val);
        ++num;
    }

    return 0;
}