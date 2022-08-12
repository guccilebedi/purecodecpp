#include <iostream>

using namespace std;

void task_1() {
    double **p = 0;
    *(*(p = new double *) = new double) = 2;
    cout << **p;
    delete *p;
    delete p;
}

double *task_2_memoryAllocator(double *array, int size) {
    array = new double[size];
    return array;
}

void task_2_arrayFiller(double *array, int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 10;
    }
}

void task_2_arrayPrinter(double *array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void task_2_memoryLiberator(const double *array) {
    delete[] array;
}

void task_2() {
    int size = 0;
    double *array = nullptr;
    while (true) {
        cout << "Input array size or 0 to stop program: ";
        cin >> size;
        if (size == 0) {
            break;
        }
        array = task_2_memoryAllocator(array, size);
        task_2_arrayFiller(array, size);
        task_2_arrayPrinter(array, size);
        task_2_memoryLiberator(array);
    }
}


void task_3_arrayChanger(int *array, int size) {
    int temp;
    for (int i = 0; i < size; i += 2) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

void task_3() {
    const int size = 12;
    int *array = new int[size];
    for (int i = 0; i < size; ++i) {
        array[i] = i + 1;
    }
    task_3_arrayChanger(array, size);
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    delete[] array;
}

void task_4_arrayFiller(int** array, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            array[i][j] = 10 + rand() % 41;
        }
    }
}

void task_4_arrayPrinter(int** array, int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}

void task_4() {
    int rows = 0;
    int columns = 0;
    cout << "Input rows number: ";
    cin >> rows;
    cout << "Input columns number: ";
    cin >> columns;
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[columns];
    }
    task_4_arrayFiller(array, rows, columns);
    task_4_arrayPrinter(array, rows, columns);
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;
}

int main() {
//    task_1();
//    task_2();
//    task_3();
    task_4();
    return 0;
}
