#include <iostream>
using namespace std;

void swapNums(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    swapNums(x, y);
    cout << x << " " << y;
}
