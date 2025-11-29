#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int salary;

    Employee(string n, int s) {
        name = n;
        salary = s;
    }

    void show() {
        cout << name << " earns " << salary;
    }
};

int main() {
    Employee e("Manan", 50000);
    e.show();
    return 0;
}
