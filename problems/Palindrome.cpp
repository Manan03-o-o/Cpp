#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string rev = string(s.rbegin(), s.rend());

    if (s == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
}
