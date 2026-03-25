#include "matrix_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

// ---------- ЗЧИТУВАННЯ ----------

void get_matrix(string filename, int matr[MAT_M][MAT_N], int &m, int &n) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Помилка відкриття файлу\n";
        return;
    }

    file >> m >> n; // розміри

    // зчитування елементів
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            file >> matr[i][j];
        }
    }

    file.close();
}

// ---------- ОБЧИСЛЕННЯ ----------

// сума рядка
int calc_row_sum(const int matr[MAT_M][MAT_N], const int m, const int n, int k) {
    int s = 0;
    for (int j = 0; j < n; j++) {
        s += matr[k][j];
    }
    return s;
}

// добуток рядка
int calc_row_prod(const int matr[MAT_M][MAT_N], const int m, const int n, int k) {
    int p = 1;
    for (int j = 0; j < n; j++) {
        p *= matr[k][j];
    }
    return p;
}

// ---------- ЗАПИС ----------
// дописує результат у файл
void save_result(string filename, int sum, int prod) {
    ofstream file(filename, ios::app);

    file << "\nСума: " << sum;
    file << "\nДобуток: " << prod;

    file.close();
}