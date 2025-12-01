#include <iostream>
using namespace std;

int main() {
    string pass;
    cin >> pass;

    bool upper = false, lower = false, digit = false, special = false;

    for (char c : pass) {
        if (isupper(c)) upper = true;
        else if (islower(c)) lower = true;
        else if (isdigit(c)) digit = true;
        else special = true;
    }

    if (pass.length() >= 8 && upper && lower && digit && special)
        cout << "Strong Password";
    else
        cout << "Weak Password";

    return 0;
}
