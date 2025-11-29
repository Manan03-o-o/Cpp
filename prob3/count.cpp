#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int pos = 0, neg = 0, zero = 0;

    for (int x : arr) {
        if (x > 0) pos++;
        else if (x < 0) neg++;
        else zero++;
    }

    cout << "Positive = " << pos << "\nNegative = " << neg << "\nZero = " << zero;
    return 0;
}
