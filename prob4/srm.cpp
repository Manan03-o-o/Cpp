#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks[3];

    void input() {
        cin >> name;
        for (int i = 0; i < 3; i++) cin >> marks[i];
    }

    float getAverage() {
        float sum = 0;
        for (int i = 0; i < 3; i++) sum += marks[i];
        return sum / 3;
    }
};

int main() {
    int n;
    cin >> n;

    Student s[n];
    for (int i = 0; i < n; i++) s[i].input();

    for (int i = 0; i < n; i++) {
        cout << s[i].name << " Avg = " << s[i].getAverage() << endl;
    }

    return 0;
}
