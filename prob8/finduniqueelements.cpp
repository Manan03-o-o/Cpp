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
