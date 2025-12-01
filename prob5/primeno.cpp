#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
        if (isPrime(i))
            cout << i << " ";

    return 0;
}
// This program reads two integers a and b from standard input
// and prints all prime numbers in the range [a, b] to standard output.
// It defines a helper function isPrime to check for primality.
// The program uses a simple trial division method to determine if a number is prime.
// The program adheres to the C++14 standard.
// Example input: 10 30
// Example output: 11 13 17 19 23 29