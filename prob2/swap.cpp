#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int *p = &a, *q = &b;

    int temp = *p;
    *p = *q;
    *q = temp;

    cout << a << " " << b;
}
