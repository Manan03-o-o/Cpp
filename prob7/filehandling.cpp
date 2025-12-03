#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream out("students.txt");

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int marks;
        cin >> name >> marks;
        out << name << " " << marks << endl;
    }

    out.close();

    ifstream in("students.txt");
    string name;
    int marks;

    while (in >> name >> marks)
        cout << name << " : " << marks << endl;

    return 0;
}
