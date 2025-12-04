#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> freq;

    for (int x : arr) freq[x]++;

    for (auto p : freq)
        cout << p.first << " → " << p.second << endl;

    return 0;
}
// This program reads an array of integers and counts the frequency of each unique element using a map.
// It then prints each unique element along with its frequency in ascending order.
