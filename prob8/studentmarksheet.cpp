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
