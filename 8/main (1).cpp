#include <iostream>
#include <clocale> // для української мови в консолі
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

// Прототипи функцій (3 завдання)
void task1(); // Array95
void task2(); // Matrix17
void task3(); // Сортування

int main() {
    setlocale(LC_ALL, "");

    int num; // вибір користувача

    // Меню
    do {
        cout << "\n1 - Array95";
        cout << "\n2 - Matrix17";
        cout << "\n3 - Sort (Insertion)";
        cout << "\n0 - Вихід";
        cout << "\nВаш вибір: ";
        cin >> num;

        // Обробка вибору
        switch (num) {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
        }

    } while (num != 0); // поки не 0

    return 0;
}

// ---------------- TASK 1 ----------------
// Видалення сусідніх однакових елементів
void task1() {
    int arr[ARR_N], n;
    string in, out;

    cout << "Введіть файл (вхід): ";
    cin >> in;
    cout << "Введіть файл (вихід): ";
    cin >> out;

    get_int_array(in, arr, n);   // зчитування
    calc_arr_95(arr, n);         // обробка
    save_int_array(out, arr, n); // запис
}

// ---------------- TASK 2 ----------------
// Сума і добуток K-го рядка
void task2() {
    int matr[MAT_M][MAT_N];
    int m, n, k;
    string filename;

    cout << "Введіть файл матриці: ";
    cin >> filename;

    get_matrix(filename, matr, m, n); // зчитування

    // перевірка K
    do {
        cout << "K (1.." << m << "): ";
        cin >> k;
    } while (k < 1 || k > m);

    k--; // перехід до індексації з 0

    int sum = calc_row_sum(matr, m, n, k);
    int prod = calc_row_prod(matr, m, n, k);

    save_result(filename, sum, prod); // допис у файл
}

// ---------------- TASK 3 ----------------
// Сортування вставками
void task3() {
    char arr[ARR_N];
    int n;
    string in, out;

    cout << "Введіть файл (вхід): ";
    cin >> in;
    cout << "Введіть файл (вихід): ";
    cin >> out;

    get_char_array(in, arr, n);   // зчитування
    calc_sort_3(arr, n);          // сортування
    save_char_array(out, arr, n); // запис
}