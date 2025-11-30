#include <iostream>
using namespace std;

int main() {
    int balance = 1000, choice, amt;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show Balance\n4. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cin >> amt;
                balance += amt;
                cout << "Deposited!\n";
                break;

            case 2:
                cin >> amt;
                if (amt <= balance) balance -= amt;
                else cout << "Insufficient funds!\n";
                break;

            case 3:
                cout << "Balance = " << balance << endl;
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Option!\n";
        }
    } while (choice != 4);

    return 0;
}
