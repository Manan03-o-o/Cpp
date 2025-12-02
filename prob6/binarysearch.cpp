#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) return mid;
        if (arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6, x = 10;

    int result = binarySearch(arr, n, x);
    if (result != -1) cout << "Found at index " << result;
    else cout << "Not found";
}
// This code implements a binary search algorithm to find an element in a sorted array.
// It returns the index of the element if found, otherwise returns -1.
// The main function demonstrates the usage of the binary search function.
// C++14 standard is used for this implementation.
// C++ language standard version: This project uses the C++14 language standard version.
