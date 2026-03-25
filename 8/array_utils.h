#pragma once
#include <string>
using namespace std;

// Максимальний розмір масиву
const int ARR_N = 50;

// ---------- Зчитування / запис ----------

// Зчитування цілочисельного масиву з файлу
void get_int_array(string filename, int arr[ARR_N], int &n);

// Запис цілочисельного масиву у файл
void save_int_array(string filename, const int arr[ARR_N], const int n);

// Зчитування символьного масиву
void get_char_array(string filename, char arr[ARR_N], int &n);

// Запис символьного масиву
void save_char_array(string filename, const char arr[ARR_N], const int n);

// ---------- Обробка ----------

// Array95: видалення сусідніх однакових
void calc_arr_95(int arr[ARR_N], int &n);

// Сортування вставками (за зростанням)
void calc_sort_3(char arr[ARR_N], const int n);