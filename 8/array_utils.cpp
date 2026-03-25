#include "array_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

// ---------- ЗЧИТУВАННЯ ----------

void get_int_array(string filename, int arr[ARR_N], int &n) {
    ifstream file(filename); // відкриваємо файл

    if (!file.is_open()) {
        cout << "Помилка відкриття файлу\n";
        return;
    }

    file >> n; // читаємо розмір

    // читаємо елементи
    for (int i = 0; i < n; i++) {
        file >> arr[i];
    }

    file.close();
}

// ---------- ЗАПИС  ----------

void save_int_array(string filename, const int arr[ARR_N], const int n) {
    ofstream file(filename);

    // запис елементів
    for (int i = 0; i < n; i++) {
        file << arr[i] << " ";
    }

    file.close();
}

// ---------- ЗЧИТУВАННЯ CHAR ----------

void get_char_array(string filename, char arr[ARR_N], int &n) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Помилка відкриття файлу\n";
        return;
    }

    file >> n;

    for (int i = 0; i < n; i++) {
        file >> arr[i];
    }

    file.close();
}

// ---------- ЗАПИС CHAR ----------

void save_char_array(string filename, const char arr[ARR_N], const int n) {
    ofstream file(filename);

    for (int i = 0; i < n; i++) {
        file << arr[i] << " ";
    }

    file.close();
}

// ---------- Array95 ----------
// Видаляє сусідні однакові елементи
void calc_arr_95(int arr[ARR_N], int &n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {

            // зсув вліво
            for (int j = i + 1; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }

            n--; // зменшуємо розмір
            i--; // перевіряємо ще раз
        }
    }
}

// ---------- SORT ----------
// Сортування вставками
void calc_sort_3(char arr[ARR_N], const int n) {
    for (int i = 1; i < n; i++) {
        char key = arr[i]; // поточний елемент
        int j = i - 1;

        // зсув більших елементів
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}