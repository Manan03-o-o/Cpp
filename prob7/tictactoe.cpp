#include <iostream>
using namespace std;

int main() {
    char board[3][3];

    // Input 9 characters
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> board[i][j];

    cout << "\nTic-Tac-Toe Board:\n";
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << "\n-----------\n";
    }

    return 0;
}
// This program reads a 3x3 Tic-Tac-Toe board configuration from user input
// and then displays it in a formatted manner.
// The board is represented as a 2D array of characters.
// Each cell can contain 'X', 'O', or a blank space.
