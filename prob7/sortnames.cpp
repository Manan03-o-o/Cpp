#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string names[n];
    for (int i = 0; i < n; i++) cin >> names[i];

    sort(names, names + n);

    for (string s : names) cout << s << endl;

    return 0;
}
