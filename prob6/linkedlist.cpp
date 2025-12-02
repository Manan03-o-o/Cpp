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
