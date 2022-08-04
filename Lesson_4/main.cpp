#include <iostream>
using namespace std;

void task_1() {
    int number;
    cout << "Input number: ";
    cin >> number;
    if ((number / 1000) % 10 == 1) {
        cout << "one thousand ";
    } else if ((number / 1000) % 10 == 2) {
        cout << "two thousands ";
    } else if ((number / 1000) % 10 == 3) {
        cout << "three thousands ";
    } else if ((number / 1000) % 10 == 4) {
        cout << "four thousands ";
    } else if ((number / 1000) % 10 == 5) {
        cout << "five thousands ";
    } else if ((number / 1000) % 10 == 6) {
        cout << "six thousands ";
    } else if ((number / 1000) % 10 == 7) {
        cout << "seven thousands ";
    } else if ((number / 1000) % 10 == 8) {
        cout << "eight thousands ";
    } else if ((number / 1000) % 10 == 9) {
        cout << "nine thousands ";
    }
    if ((number / 100) % 10 == 1) {
        cout << "one hundred ";
    } else if ((number / 100) % 10 == 2) {
        cout << "two hundreds ";
    } else if ((number / 100) % 10 == 3) {
        cout << "three hundreds ";
    } else if ((number / 100) % 10 == 4) {
        cout << "four hundreds ";
    } else if ((number / 100) % 10 == 5) {
        cout << "five hundreds ";
    } else if ((number / 100) % 10 == 6) {
        cout << "six hundreds ";
    } else if ((number / 100) % 10 == 7) {
        cout << "seven hundreds ";
    } else if ((number / 100) % 10 == 8) {
        cout << "eight hundreds ";
    } else if ((number / 100) % 10 == 9) {
        cout << "nine hundreds ";
    }
    if ((number / 10) % 10 == 1) {
        if (number % 10 == 0) {
            cout << "ten ";
        } else if (number % 10 == 1) {
            cout << "eleven ";
        } else if (number % 10 == 2) {
            cout << "twelve ";
        } else if (number % 10 == 3) {
            cout << "thirteen ";
        } else if (number % 10 == 4) {
            cout << "fourteen ";
        } else if (number % 10 == 5) {
            cout << "fifteen ";
        } else if (number % 10 == 6) {
            cout << "sixteen ";
        } else if (number % 10 == 7) {
            cout << "seventeen ";
        } else if (number % 10 == 8) {
            cout << "eighteen ";
        } else if (number % 10 == 9) {
            cout << "nineteen ";
        }
    } else {
        if ((number / 10) % 10 == 2) {
            cout << "twenty ";
        } else if ((number / 10) % 10 == 3) {
            cout << "thirty ";
        } else if ((number / 10) % 10 == 4) {
            cout << "forty ";
        } else if ((number / 10) % 10 == 5) {
            cout << "fifty ";
        } else if ((number / 10) % 10 == 6) {
            cout << "sixty ";
        } else if ((number / 10) % 10 == 7) {
            cout << "seventy ";
        } else if ((number / 10) % 10 == 8) {
            cout << "eighty ";
        } else if ((number / 10) % 10 == 9) {
            cout << "ninety ";
        }
        if (number % 10 == 1) {
            cout << "one ";
        } else if (number % 10 == 2) {
            cout << "two ";
        } else if (number % 10 == 3) {
            cout << "three ";
        } else if (number % 10 == 4) {
            cout << "four ";
        } else if (number % 10 == 5) {
            cout << "five ";
        } else if (number % 10 == 6) {
            cout << "six ";
        } else if (number % 10 == 7) {
            cout << "seven ";
        } else if (number % 10 == 8) {
            cout << "eight ";
        } else if (number % 10 == 9) {
            cout << "nine ";
        }
    }
    cout << "$";
}

void task_2() {
    int finger;
    cout << "Input finger number: ";
    cin >> finger;
    if (finger == 1) {
        cout << "Thumb finger";
    } else if (finger == 2) {
        cout << "Index finger";
    } else if (finger == 3) {
        cout << "Middle finger";
    } else if (finger == 4) {
        cout << "Ring finger";
    } else if (finger == 5) {
        cout << "Little finger";
    }
}

void task_3() {
    int a, b, result;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Input a * b: ";
    cin >> result;
    if (result != a * b) {
        cout << "Wrong answer!";
    } else {
        cout << "Right answer!";
    }
}

int main() {
    task_1();
    task_2();
    task_3();
    return 0;
}
