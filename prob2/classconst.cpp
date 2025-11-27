#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;

    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void show() {
        cout << brand << " " << year;
    }
};

int main() {
    Car c("BMW", 2024);
    c.show();
}
