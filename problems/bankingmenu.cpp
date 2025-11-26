#include <iostream>
using namespace std;

int main() {
    int balance = 1000;
    int choice, amt;

    cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n";
    cin >> choice;

    switch (choice) {
        case 1:
            cin >> amt;
            balance += amt;
            cout << "Updated Balance = " << balance;
            break;

        case 2:
            cin >> amt;
            if (amt <= balance) balance -= amt;
            else cout << "Insufficient Balance";
            break;

        case 3:
            cout << "Balance = " << balance;
            break;

        default:
            cout << "Invalid Choice";
    }
}
