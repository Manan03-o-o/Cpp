#include <iostream>
using namespace std;

class ATM {
public:
    int balance = 1000;

    void deposit(int amt) {
        balance += amt;
        cout << "Deposited.\n";
    }

    void withdraw(int amt) {
        if (amt <= balance) {
            balance -= amt;
            cout << "Withdrawn.\n";
        } else {
            cout << "Insufficient Funds!\n";
        }
    }

    void show() {
        cout << "Balance = " << balance << endl;
    }
};

int main() {
    ATM a;
    int choice, amt;

    do {
        cout << "\n1.Deposit\n2.Withdraw\n3.Show Balance\n4.Exit\n";
        cin >> choice;

        switch(choice) {
            case 1: cin >> amt; a.deposit(amt); break;
            case 2: cin >> amt; a.withdraw(amt); break;
            case 3: a.show(); break;
        }

    } while (choice != 4);

    return 0;
}
