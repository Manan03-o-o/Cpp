#include <iostream>
using namespace std;

float calc(float a, float b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

int main() {
    float a, b;
    char op;
    cin >> a >> b >> op;

    cout << calc(a, b, op);
    return 0;
}
