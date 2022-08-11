#include <iostream>
using namespace std;

void task_1() {
    string numbers;
    int sum = 0;
    int amount = 0;
    int number;
    while (true) {
        cout << "Input number or 0 to stop program: ";
        cin >> number;
        if (number == 0) {
            cout << "Numbers: " << numbers << "\n";
            cout << "Sum: " << sum << "\n";
            cout << "Average sum: " << sum;
            break;
        } else {
            amount++;
            sum += number;
            numbers += to_string(number) + " ";
        }
    }
}

void task_2() {
    int sum = 0;
    int number;
    while (true) {
        cout << "Input number or 0 to stop program: ";
        cin >> number;
        if (number == 0) {
            cout << "Sum: " << sum << "\n";
            break;
        } else {
            if (number % 2 != 0) {
                sum += number;
            }
        }
    }
}

void task_3() {
    int height;
    cout << "Input height: ";
    cin >> height;
    for (int i = 0; i < height; ++i) {
        for (int j = 1; j < height - i; ++j) {
            cout << ' ';
        }
        for (int j = height - 2 * i; j <= height; ++j) {
            cout << '^';
        }
        cout << "\n";
    }
}

int main() {
//    task_1();
//    task_2();
    task_3();
    return 0;
}
