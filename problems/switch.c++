#include <iostream>
using namespace std;

int main() {
    char op;
    double a, b;

    cout << "Enter operation (+ - * /): ";
    cin >> op;
    cin >> a >> b;

    switch(op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator";
    }
}
