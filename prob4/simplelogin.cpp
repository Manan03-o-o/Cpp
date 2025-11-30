#include <iostream>
using namespace std;

int main() {
    string user = "admin", pass = "1234";
    string u, p;

    cout << "Enter username: ";
    cin >> u;

    cout << "Enter password: ";
    cin >> p;

    if (u == user && p == pass)
        cout << "Login Successful!";
    else
        cout << "Invalid Credentials!";

    return 0;
}
