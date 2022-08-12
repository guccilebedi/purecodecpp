#include <iostream>
using namespace std;

void arrayPrinter(int** array, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}

void task_1_arrayFiller(int** array, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            array[i][j] = 10 + rand() % 90;
        }
    }
}

void task_1_arrayChanger(int** array, int size) {
    int max = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (array[i][j] > max) {
                max = array[i][j];
                if (j > 0) {
                    array[i][j] = array[i][0];
                    array[i][0] = max;
                }
            }
        }
        max = 0;
    }
}

void task_1() {
    int size = 5;
    int** array = new int*[size];
    for (int i = 0; i < size; ++i) {
        array[i] = new int[size];
    }
    task_1_arrayFiller(array, size);
    arrayPrinter(array, size, size);
    cout << "\n";
    task_1_arrayChanger(array, size);
    arrayPrinter(array, size, size);
    for (int i = 0; i < size; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

void task_2() {
    int rows1 = 0;
    int columns1 = 0;
    int rows2 = 0;
    int columns2 = 0;
    cout << "Input rows amount for matrix 1: ";
    cin >> rows1;
    cout << "Input columns amount for matrix 1: ";
    cin >> columns1;
    cout << "Input rows amount for matrix 2: ";
    cin >> rows2;
    cout << "Input columns amount for matrix 2: ";
    cin >> columns2;
    if (rows1 == columns2 && rows2 == columns1) {
        int **array1 = new int *[rows1];
        int **array2 = new int *[rows2];
        int **array3 = new int *[rows1];
        for (int i = 0; i < rows1; ++i) {
            array1[i] = new int[columns1];
            for (int j = 0; j < columns1; ++j) {
                cout << "Input matrix 1: ";
                cin >> array1[i][j];
            }
        }
        for (int i = 0; i < rows2; ++i) {
            array2[i] = new int[columns2];
            for (int j = 0; j < columns2; ++j) {
                cout << "Input matrix 2: ";
                cin >> array2[i][j];
            }
        }
        for (int i = 0; i < rows1; ++i) {
            array3[i] = new int[columns2];
            for (int j = 0; j < columns2; ++j) {
                array3[i][j] = 0;
            }
        }
        arrayPrinter(array1, rows1, columns1);
        cout << "\n";
        arrayPrinter(array2, rows2, columns2);
        cout << "\n";
        for (int i = 0; i < rows1; ++i) {
            for (int j = 0; j < columns2; ++j) {
                for (int k = 0; k < columns1; ++k) {
                    array3[i][j] += array1[i][k] *  array2[k][j];
                }
            }
        }
        arrayPrinter(array3, rows1, columns2);
        for (int i = 0; i < rows1; ++i) {
            delete[] array1[i];
        }
        delete[] array1;
        for (int i = 0; i < rows2; ++i) {
            delete[] array2[i];
        }
        delete[] array2;
        for (int i = 0; i < rows1; ++i) {
            delete[] array3[i];
        }
        delete[] array3;
    } else {
        cout << "Can`t multiply such matrix!";
    }
}

int main() {
//    task_1();
    task_2();
    return 0;
}
