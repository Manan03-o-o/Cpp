#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int first = INT_MIN, second = INT_MIN;

    for (int x : arr) {
        if (x > first) {
            second = first;
            first = x;
        } else if (x > second && x != first) {
            second = x;
        }
    }

    cout << "Second Largest = " << second;
    return 0;
}
