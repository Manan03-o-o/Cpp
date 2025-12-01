#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int temp[n], k = 0;

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (temp[j] == arr[i]) {
                found = true;
                break;
            }
        }
        if (!found) temp[k++] = arr[i];
    }

    for (int i = 0; i < k; i++)
        cout << temp[i] << " ";

    return 0;
}

// This program reads an array of integers and removes duplicate elements,
// preserving the order of their first occurrence. It uses a temporary array
// to store unique elements and then prints them out.

// Example Input:
// 7
// 4 5 6 4 2 5 1
// Example Output:
// 4 5 6 2 1
// Explanation:
// The input array has duplicates (4 and 5 appear more than once).

// The output array contains only the first occurrences of each element,
// maintaining their original order.