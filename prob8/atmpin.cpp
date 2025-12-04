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


// This program simulates a simple ATM PIN verification system.
// It defines an Account structure with PIN and balance,
// initializes an array of accounts, and checks user input against stored PINs.
// If a match is found, it displays the corresponding balance; otherwise, it shows an error message.
