#include <iostream>

using namespace std;

void task_1(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
        cout << array[i] << " ";
    }
    cout << "\n";
}

void task_2_max(int array[5][5]) {
    int max = 30;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }
    cout << "Max element: " << max << "\n";
}

void task_2_min(int array[5][5]) {
    int min = 60;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (array[i][j] < min) {
                min = array[i][j];
            }
        }
    }
    cout << "Min element: " << min << "\n";
}

void task_2(int array[5][5]) {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            array[i][j] = 30 + rand() % 31;
            cout << array[i][j] << " ";
        }
        cout << "\n";
    }
    task_2_max(array);
    task_2_min(array);
}

string task_3_cubeDrawer(int score) {
    switch (score) {
        case 1:
            return "#######\n"
                   "#######\n"
                   "### ###\n"
                   "#######\n"
                   "#######\n";
        case 2:
            return "#######\n"
                   "# #####\n"
                   "#######\n"
                   "##### #\n"
                   "#######\n";
        case 3:
            return "#######\n"
                   "# #####\n"
                   "### ###\n"
                   "##### #\n"
                   "#######\n";
        case 4:
            return "#######\n"
                   "# ### #\n"
                   "#######\n"
                   "# ### #\n"
                   "#######\n";
        case 5:
            return "#######\n"
                   "# ### #\n"
                   "### ###\n"
                   "# ### #\n"
                   "#######\n";
        default:
            return "#######\n"
                   "# # # #\n"
                   "#######\n"
                   "# # # #\n"
                   "#######\n";
    }
}

void task_3() {
    int turn = rand() % 2;
    int computerScore, playerScore;
    int computerTotalScore = 0;
    int playerTotalScore = 0;
    if (turn == 0) {
        cout << "Computer starts\n\n";
    } else {
        cout << "Player starts\n\n";
    }
    for (int i = 0; i < 4; ++i) {
        if (turn == 0) {
            computerScore = 1 + rand() % 6;
            computerTotalScore += computerScore;
            playerScore = 1 + rand() % 6;
            playerTotalScore += playerScore;
            cout << "Computer scores " << computerScore << "\n";
            cout << task_3_cubeDrawer(computerScore);
            cout << "Player scores " << playerScore << "\n";
            cout << task_3_cubeDrawer(playerScore) << "\n";
        } else {
            playerScore = 1 + rand() % 6;
            playerTotalScore += playerScore;
            computerScore = 1 + rand() % 6;
            computerTotalScore += computerScore;
            cout << "Player scores " << playerScore << "\n";
            cout << task_3_cubeDrawer(playerScore);
            cout << "Computer scores " << computerScore << "\n";
            cout << task_3_cubeDrawer(computerScore) << "\n";
        }
    }
    if (computerTotalScore > playerTotalScore) {
        cout << "Computer wins with score " << computerTotalScore << " vs players score " << playerTotalScore
             << "\n";
    } else {
        cout << "Player wins with score " << playerTotalScore << " vs computers score " << computerTotalScore
             << "\n";
    }
}

int main() {
    int array1_1[5], array1_2[5], array2[5][5];
//    task_1(array1_1, 5);
//    task_1(array1_2, 5);
//    task_2(array2);
    task_3();
    return 0;
}
