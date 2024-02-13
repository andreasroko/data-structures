// main.cpp
#include "stack.hpp"

std::string stackBehaviorToString(StackBehavior behavior) {
    switch (behavior) {
        case StackBehavior::LIFO:
            return "LIFO";
        case StackBehavior::FIFO:
            return "FIFO";
        default:
            return "Unknown";
    }
}

int main() {
    Stack<std::string> myStack(StackBehavior::LIFO);

    // Push some values onto the stack
    myStack.push("test");
    myStack.push("test2");
    myStack.push("test3");

    // Display the current stack
    myStack.printStack();

    // Pop elements from the stack
    for (int i = 0; i < 3; i++) {
        std::optional<std::string> poppedValue = myStack.pop();
        if (poppedValue.has_value()) {
            std::cout << "Popped value: " << poppedValue.value() << " from stack with behavior: " << stackBehaviorToString(myStack.getStackBehavior()) << std::endl;
        } else {
            std::cout << "The stack is empty." << std::endl;
        }
    }

    // Display the updated stack
    myStack.printStack();

    Stack<int> myQueue(StackBehavior::FIFO);

    // Push some values onto the stack
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Display the current stack
    std::cout << "FIFO behavior:" << std::endl;
    myQueue.printStack();

    // Pop elements from the stack
    for (int i = 0; i < 3; i++) {
        std::optional<int> poppedValue = myQueue.pop();
        if (poppedValue.has_value()) {
            std::cout << "Popped value: " << poppedValue.value() << " from stack with behavior: " << stackBehaviorToString(myQueue.getStackBehavior()) << std::endl;
        } else {
            std::cout << "The stack is empty." << std::endl;
        }
    }

    // Display the updated stack
    myStack.printStack();

    return 0;
}
