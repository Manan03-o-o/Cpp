#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << name << " " << age;
    }
};

int main() {
    Student s;
    s.name = "Manan";
    s.age = 19;
    s.display();
}
