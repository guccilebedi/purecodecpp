#include <iostream>
using namespace std;

void task_1() {
    int number = 5678;
    cout << "Number: " << number << "\nReversed number: ";
    for (int i = 1; i <= 4; i++) {
        cout << number % 10;
        number = number / 10;
    }
}

void task_2() {
    double deposit;
    int months;
    double rate = 5;
    cout << "Input deposit amount: ";
    cin >> deposit;
    cout << "Input months amount: ";
    cin >> months;
    double monthlyProfit = deposit * (rate / 100) / 365 * 30;
    double fullProfit = monthlyProfit * 12;
    double fullSum = deposit + fullProfit;
    cout << "Monthly profit: " << monthlyProfit << "$\n";
    cout << "Full profit: " <<  fullProfit << "$\n";
    cout << "All money: " << fullSum << "$";
}

int main() {
    task_1();
    task_2();
    return 0;
}
