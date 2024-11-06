#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int maxSize;
    int* stackArray;

public:
    Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1; // stack is initially empty
    }

    // Destructor to free up allocated memory
    ~Stack() {
        delete[] stackArray;
    }

    // Push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push " << value << endl;
        } else {
            stackArray[++top] = value;
            cout << value << " pushed onto the stack." << endl;
        }
    }

    // Pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! No elements to pop." << endl;
        } else {
            cout << stackArray[top--] << " popped from the stack." << endl;
        }
    }

    // Peek at the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! No elements to peek." << endl;
            return -1;
        } else {
            return stackArray[top];
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() {
        return top == maxSize - 1;
    }
};

int main() {
    Stack stack(5);  // Create a stack of maximum size 5

    // Demonstrating stack operations
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);

    cout << "Top element is: " << stack.peek() << endl;

    stack.push(60);  // Trying to push into a full stack

    stack.pop();
    stack.pop();

    cout << "Top element after popping is: " << stack.peek() << endl;

    // Pop remaining elements
    while (!stack.isEmpty()) {
        stack.pop();
    }

    stack.pop();  // Trying to pop from an empty stack

    return 0;
}
