#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int roll;
    string name;
};

int main() {
    int n;
    cin >> n;

    vector<Student> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].roll >> v[i].name;

    int searchRoll;
    cin >> searchRoll;

    for (auto &s : v) {
        if (s.roll == searchRoll) {
            cout << "Found: " << s.name;
            return 0;
        }
    }

    cout << "Not Found!";
    return 0;
}
