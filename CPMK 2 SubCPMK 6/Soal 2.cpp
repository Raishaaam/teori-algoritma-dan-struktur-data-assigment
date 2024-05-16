#include <iostream>
#include <stack>

class Stack {
private:
    std::stack<int> stack;

public:
    void push(int item) {
        stack.push(item);
    }

    int pop() {
        if (!isEmpty()) {
            int top = stack.top();
            stack.pop();
            return top;
        }
        return -1; // Return -1 jika stack kosong
    }

    int peek() {
        if (!isEmpty()) {
            return stack.top();
        }
        return -1; // Return -1 jika stack kosong
    }

    bool isEmpty() {
        return stack.empty();
    }
};

// Fungsi untuk mensortir stack
Stack sortStack(Stack& stack) {
    Stack tempStack;
    while (!stack.isEmpty()) {
        int temp = stack.pop();
        while (!tempStack.isEmpty() && tempStack.peek() > temp) {
            stack.push(tempStack.pop());
        }
        tempStack.push(temp);
    }
    return tempStack;
}

int main() {
    Stack stack;
    stack.push(5);
    stack.push(2);
    stack.push(8);
    stack.push(1);
    stack.push(3);

    Stack sortedStack = sortStack(stack);

    while (!sortedStack.isEmpty()) {
        std::cout << sortedStack.pop() << " ";
    }
    std::cout << std::endl;

    return 0;
}