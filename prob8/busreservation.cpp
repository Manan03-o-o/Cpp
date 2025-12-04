#include <iostream>
using namespace std;

int main() {
    int seats[10] = {0};
    int choice, seat;

    while (true) {
        cout << "\n1. Book Seat\n2. Cancel Seat\n3. Show Seats\n4. Exit\n";
        cin >> choice;

        if (choice == 1) {
            cin >> seat;
            if (seat < 1 || seat > 10) cout << "Invalid Seat!\n";
            else if (seats[seat-1] == 0) {
                seats[seat-1] = 1;
                cout << "Seat booked!";
            } else cout << "Already booked!";
        }

        else if (choice == 2) {
            cin >> seat;
            if (seats[seat-1] == 1) {
                seats[seat-1] = 0;
                cout << "Seat cancelled!";
            } else cout << "Seat not booked!";
        }

        else if (choice == 3) {
            for (int i = 0; i < 10; i++)
                cout << (seats[i] ? "[X]" : "[ ]") << " ";
            cout << endl;
        }

        else break;
    }

    return 0;
}
