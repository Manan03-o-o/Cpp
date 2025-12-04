#include <iostream>
using namespace std;

struct Account {
    int pin;
    int balance;
};

int main() {
    Account acc[3] = {{1111, 5000}, {2222, 3000}, {3333, 10000}};
    int enteredPin;

    cout << "Enter PIN: ";
    cin >> enteredPin;

    for (int i = 0; i < 3; i++) {
        if (enteredPin == acc[i].pin) {
            cout << "Login Successful!\n";
            cout << "Balance = " << acc[i].balance;
            return 0;
        }
    }

    cout << "Invalid PIN!";
    return 0;
}
