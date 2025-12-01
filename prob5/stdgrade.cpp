#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int marks[n];
    for (int i = 0; i < n; i++) cin >> marks[i];

    float total = 0;
    for (int i = 0; i < n; i++) total += marks[i];

    float avg = total / n;

    cout << "Average = " << avg << endl;

    if (avg >= 90) cout << "Grade A";
    else if (avg >= 75) cout << "Grade B";
    else if (avg >= 50) cout << "Grade C";
    else cout << "Grade D";

    return 0;
}
