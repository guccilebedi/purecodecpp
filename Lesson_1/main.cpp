#include <iostream>
using namespace std;

double task_1() {
    int chocolateAmount = 10;
    int coffeeAmount = 5;
    int milkAmount = 7;
    double chocolatePrice = 50.99;
    double coffeePrice = 299.9;
    double milkPrice = 109.99;
    return chocolateAmount * chocolatePrice + coffeeAmount * coffeePrice + milkAmount * milkPrice;
}

int task_2() {
    int a = 10;
    int b = a + 3;
    int c = a + b;
    return c;
}

int task_3() {
    int cups = 10;
    int spoons = cups;
    int plates = cups;
    return cups + spoons + plates;
}

int main() {
    cout << task_1() << "\n" << task_2() << "\n" << task_3();
    return 0;
}
