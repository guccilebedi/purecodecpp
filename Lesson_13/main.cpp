#include <iostream>

using namespace std;

class Tiles {
public:
    string brand;
    int size_h{};
    int size_w{};
    int price{};

    void getData() {
        cout << "Brand: " << brand << "\n";
        cout << "Height: " << size_h << "\n";
        cout << "Width: " << size_w << "\n";
        cout << "Price: " << price << "\n";
    };
};

class Children {
private:
    string name;
    string surname;
    int age{};

public:
    void setData() {
        cout << "Input name: ";
        cin >> name;
        cout << "Input surname: ";
        cin >> surname;
        cout << "Input age: ";
        cin >> age;
    };

    void getData() {
        cout << "Name: " << name << "\n";
        cout << "Surname: " << surname << "\n";
        cout << "Age: " << age << "\n";
    }
};

class Array {
private:
    int **array;

public:
    void setArray(int rows, int columns) {
        array = new int *[rows];
        for (int i = 0; i < rows; ++i) {
            array[i] = new int[columns];
            for (int j = 0; j < columns; ++j) {
                array[i][j] = rand() % 10;
            }
        }
    }

    void reverseArray(int rows, int columns) {
        int **temp = new int *[columns];
        for (int i = 0; i < columns; ++i) {
            temp[i] = new int[rows];
            for (int j = 0; j < rows; ++j) {
                temp[i][j] = array[j][i];
            }
        }
        for (int i = 0; i < rows; ++i) {
            delete[] array[i];
        }
        delete[] array;
        array = new int *[columns];
        for (int i = 0; i < columns; ++i) {
            array[i] = new int[rows];
        }
        for (int i = 0; i < columns; ++i) {
            for (int j = 0; j < rows; ++j) {
                array[i][j] = temp[i][j];
            }
        }
        for (int i = 0; i < columns; ++i) {
            delete[] temp[i];
        }
        delete[] temp;
    }

    void getArray(int rows, int columns) {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << array[i][j] << " ";
            }
            cout << "\n";
        }
    }
};

void task_1() {
    Tiles tile1, tile2;
    tile1.brand = "Brand 1";
    tile1.size_h = 10;
    tile1.size_w = 10;
    tile1.price = 100;
    tile2.brand = "Brand 2";
    tile2.size_h = 20;
    tile2.size_w = 20;
    tile2.price = 200;
    tile1.getData();
    cout << "\n";
    tile2.getData();
}

void task_2() {
    Children child1, child2;
    child1.setData();
    cout << "\n";
    child2.setData();
    cout << "\n";
    child1.getData();
    cout << "\n";
    child2.getData();
}

void task_3() {
    int rows = 0;
    int columns = 0;
    cout << "Input rows amount: ";
    cin >> rows;
    cout << "Input columns amount: ";
    cin >> columns;
    Array array{};
    cout << "\n";
    array.setArray(rows, columns);
    array.getArray(rows, columns);
    cout << "\n";
    array.reverseArray(rows, columns);
    array.getArray(columns, rows);
}

int main() {
//    task_1();
//    task_2();
    task_3();
    return 0;
}
