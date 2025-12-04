#include <iostream>
using namespace std;

int main() {
    string name;
    int m1, m2, m3;
    cin >> name >> m1 >> m2 >> m3;

    int total = m1 + m2 + m3;
    float per = total / 3.0;

    cout << "Total = " << total << endl;
    cout << "Percentage = " << per << endl;

    if (per >= 90) cout << "Grade A";
    else if (per >= 75) cout << "Grade B";
    else if (per >= 50) cout << "Grade C";
    else cout << "Grade D";

    return 0;
}
// This program calculates the total marks, percentage, and grade of a student based on input marks in three subjects.
// It reads the student's name and marks, computes the total and percentage, and assigns a grade based on the percentage.
// The output includes the total marks, percentage, and the corresponding grade.
// Sample Input:
// John 85 90 78
// Sample Output:
// Total = 253
// Percentage = 84.3333
// Grade B
