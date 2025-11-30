#include <iostream>
using namespace std;

class Contact {
public:
    string name;
    string phone;
};

int main() {
    int n;
    cin >> n;

    Contact c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i].name >> c[i].phone;
    }

    string searchName;
    cin >> searchName;

    for (int i = 0; i < n; i++) {
        if (c[i].name == searchName) {
            cout << "Phone: " << c[i].phone;
            return 0;
        }
    }

    cout << "Contact not found!";
    return 0;
}
