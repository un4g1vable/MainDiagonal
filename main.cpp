#include <iostream>
using namespace std;

int main () {
    int n;
    int MinUpper = 1000000000;
    int MaxLower = -1000000000;
    cout << "Введите количество строк и столбцов: ";
    cin >> n;
    int **A = new int*[n];
    for (int i = 0; i < n; ++i)
        A[i] = new int[n];

    cout << endl << "Ввод элементов первой матрицы: " << endl; 

    for (int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j){
            cout << "Введите элемент A: " << "[" << i+1 << "]" << "[" << j+1 << "]" << " : ";
            cin >> A[i][j];
        }

    for (int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j){
            if (i > j){
                if (A[i][j] > MaxLower)
                    MaxLower = A[i][j];
            }
        }
    for (int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j){
            if (i < j){
                if (A[i][j] < MinUpper)
                    MinUpper = A[i][j];
            }
        }

    if (MinUpper >= MaxLower)
        cout << "Условие выполняется" << endl;
    else
        cout << "Условие не выполняется" << endl;
}        