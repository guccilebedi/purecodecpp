#include <iostream>

using namespace std;

void task_1() {
    int array[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            array[i][j] = rand() % 100;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
}

void task_2() {
    int array[3][3];
    int sum = 0;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Input number for row " << i << " column " << j << ": ";
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum += array[i][j];
        }
        cout << "Row " << i << " sum: " << sum << "\n";
        sum = 0;
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum += array[j][i];
        }
        cout << "Column " << i << " sum: " << sum << "\n";
        sum = 0;
    }
}

void task_3() {
    int array[5][5], maxRow;
    int sum = 0;
    int maxSum = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            array[i][j] = 10 + rand() % 91;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            sum += array[i][j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            maxRow = i;
        }
        sum = 0;
    }
    cout << "Max sum is in " << maxRow << " row: " << maxSum;
}

int main() {
//    task_1();
//    task_2();
    task_3();
    return 0;
}
