#include <iostream>
using namespace std;

class Item {
public:
    string name;
    int qty, price;

    void input() {
        cin >> name >> qty >> price;
    }

    void display() {
        cout << name << " | Qty: " << qty << " | Price: " << price << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Item items[n];
    for (int i = 0; i < n; i++)
        items[i].input();

    cout << "\nInventory:\n";
    for (int i = 0; i < n; i++)
        items[i].display();

    return 0;
}
