#include <iostream>
using namespace std;

void task_1() {
    int array[10];
    for (int i = 0; i < 10; ++i) {
        array[i] = 7 + rand() % 8;
        cout << array[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; ++i) {
        if (array[i] > 10) {
            array[i] -= 10;
        }
        cout << array[i] << " ";
    }
}

void task_2() {
    int array[50];
    for (int i = 0; i < 50; ++i) {
        array[i] = 1 + rand() % 100;
        while (array[i] % 2 == 0) {
            array[i] = 1 + rand() % 100;
        }
        cout << array[i] << " ";
    }
}

void task_3() {
    int array1[5], array2[5], array3[5];
    int min = 30;
    int max = 0;
    int averageSum = 0;
    for (int i = 0; i < 5; ++i) {
        array1[i] = 10 + rand() % 21;
        array2[i] = 10 + rand() % 21;
        array3[i] = array1[i] + array2[i];
        if (array3[i] < min) {
            min = array3[i];
        }
        if (array3[i] > max) {
            max = array3[i];
        }
        averageSum += array3[i];
    }
    for (int i = 0; i < 5; ++i) {
        cout << array1[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 5; ++i) {
        cout << array2[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 5; ++i) {
        cout << array3[i] << " ";
    }
    cout << "\n";
    cout << "Min element: " << min << "\n";
    cout << "Max element: " << max << "\n";
    cout << "Average sum: " << averageSum / 10 << "\n";
}

int main() {
//    task_1();
//    task_2();
    task_3();
    return 0;
}
