#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int basic;

    void input() {
        cin >> name >> basic;
    }

    void displaySlip() {
        float hra = 0.20 * basic;
        float da  = 0.10 * basic;
        float gross = basic + hra + da;

        cout << "Name: " << name << endl;
        cout << "Basic: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << gross << endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.displaySlip();
    return 0;
}
