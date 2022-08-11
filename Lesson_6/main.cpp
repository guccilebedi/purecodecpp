#include <iostream>

using namespace std;

void task_1() {
    int number;
    for (;;) {
        cout << "Input number or 0 to stop program: ";
        cin >> number;
        if (number == 0) {
            break;
        } else {
            cout << number * number << "\n";
        }
    }
}

void task_2() {
    int peopleAmount, age;
    int averageAge = 0;
    int maxAge = 0;
    int minAge = 100;
    cout << "Input people amount: ";
    cin >> peopleAmount;
    for (int i = 0; i < peopleAmount; ++i) {
        cout << "Input age of person " << i + 1 << ": ";
        cin >> age;
        if (age > maxAge) {
            maxAge = age;
        }
        if (age < minAge) {
            minAge = age;
        }
        averageAge += age;
    }
    cout << "Maximum age: " << maxAge << "\n";
    cout << "Minimum age: " << minAge << "\n";
    cout << "Average age: " << averageAge / peopleAmount << "\n";
}

void task_2_1() {
    int peopleAmount, hours;
    int earning = 0;
    const int price = 200;
    cout << "Input people amount: ";
    cin >> peopleAmount;
    for (int i = 0; i < peopleAmount; ++i) {
        cout << "Input time of training in hours for person " << i + 1 << ": ";
        cin >> hours;
        earning += price * hours;
    }
    cout << "Todays earning: " << earning;
}

void task_3() {
    int cratesAmount = 15;
    int cratesToLoad;
    for (int i = 0; ; i++) {
        cout << "Input crates amount to load into car " << i + 1 << ": ";
        cin >> cratesToLoad;
        if (cratesToLoad > cratesAmount) {
            cout << "Not enough crates, only " << cratesAmount << " left!\n";
            i--;
        } else {
            cratesAmount -= cratesToLoad;
        }
        if (cratesAmount == 0) {
            cout << "All crates were loaded!";
            break;
        }
    }
}

int main() {
//    task_1();
//    task_2();
//    task_2_1();
    task_3();
    return 0;
}
