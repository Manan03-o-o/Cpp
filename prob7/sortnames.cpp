#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string names[n];
    for (int i = 0; i < n; i++) cin >> names[i];

    sort(names, names + n);

    for (string s : names) cout << s << endl;

    return 0;
}
// prob7/sortnames.cpp
// This program reads a list of names, sorts them in alphabetical order, and prints them.
// It uses the C++14 standard and the STL sort function for sorting.
// Example Input:
// 3
// Charlie
// Alice
// Bob
// Example Output:
// Alice
// Bob
// Charlie
//
// To compile: g++ -std=c++14 prob7/sortnames.cpp -o sortnames
// To run: ./sortnames < input.txt > output.txt