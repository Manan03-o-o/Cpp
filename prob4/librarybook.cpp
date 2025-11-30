#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
};

int main() {
    int n;
    cin >> n;

    Book b[n];
    for (int i = 0; i < n; i++) {
        cin >> b[i].id;
        cin.ignore();
        getline(cin, b[i].title);
    }

    int key;
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (b[i].id == key) {
            cout << "Found: " << b[i].title;
            return 0;
        }
    }

    cout << "Book not found!";
    return 0;
}
