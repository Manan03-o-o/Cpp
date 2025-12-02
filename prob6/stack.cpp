#include <iostream>
using namespace std;

class Stack {
    int arr[100], top;
public:
    Stack() { top = -1; }

    void push(int x) {
        if (top == 99) return;
        arr[++top] = x;
    }
    void pop() {
        if (top == -1) return;
        top--;
    }
    int peek() {
        return arr[top];
    }
    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    while (!st.empty()) {
        cout << st.peek() << " ";
        st.pop();
    }
}
