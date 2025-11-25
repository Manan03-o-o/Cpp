#include <iostream>
using namespace std;

int main() {
    int n, flag = 1;
    cin >> n;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) flag = 0;

    if (flag) cout << "Prime";
    else cout << "Not Prime";
}
