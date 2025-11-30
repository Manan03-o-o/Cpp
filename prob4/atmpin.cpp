#include <iostream>
using namespace std;

int main() {
    int pin = 1234;
    int entered, attempts = 0;

    while (attempts < 3) {
        cin >> entered;

        if (entered == pin) {
            cout << "Access Granted!";
            return 0;
        }

        attempts++;
        cout << "Wrong PIN! Attempts left: " << (3 - attempts) << endl;
    }

    cout << "Card Blocked!";
    return 0;
}
