#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, sum = 0;
    cin >> n;

    temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += d * d * d;
        temp /= 10;
    }

    if (sum == n) cout << "Armstrong";
    else cout << "Not Armstrong";
}
