#include <iostream>
using namespace std;
#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int x) {
    if (top == SIZE - 1) cout << "Stack Overflow\n";
    else stack[++top] = x;
}

void pop() {
    if (top == -1) cout << "Stack Underflow\n";
    else cout << "Popped: " << stack[top--] << "\n";
}

void peek() {
    if (top == -1) cout << "Stack Empty\n";
    else cout << "Top: " << stack[top] << "\n";
}

void display() {
    if (top == -1) cout << "Stack Empty\n";
    else {
        for (int i = top; i >= 0; i--) cout << stack[i] << " ";
        cout << "\n";
    }
}

void isEmpty() {
    if (top == -1) cout << "Stack is Empty\n";
    else cout << "Not Empty\n";
}

void isFull() {
    if (top == SIZE - 1) cout << "Stack is Full\n";
    else cout << "Not Full\n";
}

int main() {
    int ch, val;
    do {
        cout << "\n1.Push 2.Pop 3.Peek 4.Display 5.isEmpty 6.isFull 7.Exit\n";
        cin >> ch;
        switch (ch) {
            case 1: cin >> val; push(val); 
            break;
            case 2: pop(); 
            break;
            case 3: peek(); 
            break;
            case 4: display(); 
            break;
            case 5: isEmpty();
             break;
            case 6: isFull();
             break;
        }
    } while (ch != 7);
}

