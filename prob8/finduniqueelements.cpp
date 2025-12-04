#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool unique = true;
        for (int j = 0; j < n; j++)
            if (i != j && arr[i] == arr[j])
                unique = false;

        if (unique)
            cout << arr[i] << " ";
    }

    return 0;
}
// This program reads an integer n and then n integers into an array. It then finds and prints all unique elements in the array (elements that appear only once).   
// The program uses nested loops to compare each element with every other element to determine uniqueness.
