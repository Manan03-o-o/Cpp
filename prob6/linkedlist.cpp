#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insert(Node*& head, int x) {
    Node* n = new Node{x, head};
    head = n;
}

void display(Node* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {
    Node* head = NULL;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    display(head);
}


// Output: 30 20 10
// This code defines a simple linked list with functions to insert new nodes at the head and display the list.

// The insert function creates a new node with the given data and updates the head pointer.
// The display function traverses the list and prints the data of each node.
// The main function demonstrates inserting three nodes and displaying the list.
