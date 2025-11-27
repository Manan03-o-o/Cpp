#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void show() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

int main() {
    Student s;
    s.name = "Manan";
    s.age = 19;

    s.show();

    return 0;
}
