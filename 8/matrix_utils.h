#pragma once
#include <string>
using namespace std;

// Максимальні розміри матриці
const int MAT_M = 50;
const int MAT_N = 50;

// ---------- Зчитування ----------

// Зчитування матриці з файлу
void get_matrix(string filename, int matr[MAT_M][MAT_N], int &m, int &n);

// Запис результату у файл (дописування)
void save_result(string filename, int sum, int prod);

// ---------- Обробка ----------

// Сума K-го рядка
int calc_row_sum(const int matr[MAT_M][MAT_N], const int m, const int n, int k);

// Добуток K-го рядка
int calc_row_prod(const int matr[MAT_M][MAT_N], const int m, const int n, int k);