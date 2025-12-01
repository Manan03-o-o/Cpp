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
