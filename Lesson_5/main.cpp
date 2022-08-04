#include <iostream>

using namespace std;

void task_1() {
    int day;
    cout << "Input day number: ";
    cin >> day;
    switch (day) {
        case 1 :
            cout << "Monday: work";
        case 2 :
            cout << "Tuesday: work";
        case 3:
            cout << "Wednesday: work";
        case 4:
            cout << "Thursday: work";
        case 5:
            cout << "Friday: work";
        case 6:
            cout << "Saturday: beer";
        case 7:
            cout << "Sunday: beer";
        default:
            cout << "Wrong day number!";
    }
}

void task_2() {
    char answer;
    bool var = true;
    cout << "Введите букву станции метро, для расчета времени в пути (A, B, C, D, E): ";
    do {
        cin >> answer;
        switch (answer)
        {
            case 'a':
            case 'A':
                cout << "Станция метро Trinitat Nova: ";
                cout << "Время в пути - 15 мин." << endl;
                break;
            case 'b':
            case 'B':
                cout << "Станция метро Casa de l’Aigua: ";
                cout << "Время в пути - 19 мин." << endl;
                break;
            case 'c':
            case 'C':
                cout << "Станция метро Torre Baro Vallbona: ";
                cout << "Время в пути - 25 мин." << endl;
                break;
            case 'd':
            case 'D':
                cout << "Станция метро Ciutat Meridiana: ";
                cout << "Время в пути - 30 мин." << endl;
                break;
            case 'e':
            case 'E':
                cout << "Станция метро Can Cuias: ";
                cout << "Время в пути - 38 мин." << endl;
                break;
            default:
                cout << "Станции под буквой " << answer << " нет! ";
                var = false;
        }
    } while (var);
}


int main() {
//    task_1();
    task_2();
    return 0;
}
