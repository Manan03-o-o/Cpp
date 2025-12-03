#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char ans;

    cout << "1) Capital of India?\nA) Delhi  B) Mumbai\n";
    cin >> ans;
    if (ans == 'A' || ans == 'a') score++;

    cout << "2) 5 + 7 = ?\nA) 10  B) 12\n";
    cin >> ans;
    if (ans == 'B' || ans == 'b') score++;

    cout << "3) Sun rises in the?\nA) East  B) West\n";
    cin >> ans;
    if (ans == 'A' || ans == 'a') score++;

    cout << "Your Score: " << score << "/3\n";

    return 0;
}
// End of quizgame.cpp
// A simple quiz game that asks three questions and calculates the score based on user answers.
// Each correct answer adds one point to the score.
// The program uses basic input/output and conditional statements.
// The program is written in C++14 standard.
// Example Output:
// 1) Capital of India?
// A) Delhi  B) Mumbai
// A
// 2) 5 + 7 = ?