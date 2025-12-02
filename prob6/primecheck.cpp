#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int n = 29;
    if (isPrime(n)) cout << "Prime";
    else cout << "Not Prime";
}
// Output: Prime
// The code checks if a given number is prime and prints the result.    
// It defines a function isPrime that returns true if the number is prime, otherwise false.
// In main, it checks if 29 is prime and prints "Prime" or "Not Prime" accordingly.
// The code checks if a given number is prime and prints the result.
// It defines a function isPrime that returns true if the number is prime, otherwise false.
