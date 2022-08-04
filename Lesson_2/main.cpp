#include <iostream>

using namespace std;

void task_1() {
    int a;
    double b;
    string c;
    cout << "Input int: ";
    cin >> a;
    cout << "Input double: ";
    cin >> b;
    cout << "Input string: ";
    cin >> c;
    cout << "int: " << a << "\ndouble: " << b << "\nstring: " << c;
}

void task_2() {
    char char1, char2, char3, char4, char5;
    cout << "Input 5-letter word letter by letter:\n";
    cout << "1st letter: ";
    cin >> char1;
    cout << "2nd letter: ";
    cin >> char2;
    cout << "3rd letter: ";
    cin >> char3;
    cout << "4th letter: ";
    cin >> char4;
    cout << "5th letter: ";
    cin >> char5;
    cout << char1 << char2 << char3 << char4 << char5;
}

void task_3() {
    cout
            << "А почему в ресторане ей никогда не нравится то,\nчто заказала она, и всегда нравится то, что заказал я?\nИ она начинает есть у меня из тарелки. Я ей говорю:\n\"Закажи себе то же самое\". Она говорит: \"Зачем?\nЯ только попробовать\". И съедает половину.\n      // к.ф. \"О чем говорят мужчины\" //";
}

void task_4() {
    int a;
    int b;
    cout << "Input a: ";
    cin >> a;
    cout << "Input b: ";
    cin >> b;
    cout << "Product: " << a * b << "\nSum: " << a + b << "\nDifference: " << a - b << "\nMean: " << (a + b) / 2;
}

int main() {
//    task_1();
//    task_2();
//    task_3();
    task_4();
    return 0;
}
