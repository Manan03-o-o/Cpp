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

// Sample Input:
// 3
// Apple 50 2

// Banana 30 1
// Orange 20 3
// Sample Output:
// Inventory:   

// Apple | Qty: 50 | Price: 2
// Banana | Qty: 30 | Price: 1
// Orange | Qty: 20 | Price: 3
// Explanation: 
// The program defines an Item class with methods to input and display item details.
// It reads the number of items and their details, then displays the inventory.

