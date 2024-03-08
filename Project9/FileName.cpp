#include <iostream>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main() {
    int a[ROWS][COLS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}