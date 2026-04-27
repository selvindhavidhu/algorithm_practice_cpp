#include "data-structures/stack.h"
#include <iostream>

using namespace data_structures;

#include <climits> // For INT_MAX

// Exercise 3.1.2
// "let stack be a stack of integers and x be an integer variable. use the functions push, pop, 
// createstack, stackempty or stackfull to write a function that sets x to the top element of 
// the stack and leaves the top element unchanged. if stack is empty, sets x to maxint."
void exercise_3_1_2(Stack& stack, int& x) {
    if (stack.isEmpty()) {
        x = INT_MAX;
    } else {
        // In the textbook, pop() removes AND returns the item.
        // In our modern C++ stack, we must top() then pop() to simulate that behavior.
        int temp = stack.top();
        stack.pop();
        
        // Assign to x
        x = temp;
        
        // Push it right back so the stack remains unchanged
        stack.push(temp);
    }
}

// We will do the exercises from the book later here
void do_exercises() {
    std::cout << "Stack Exercises - Chapter 3\n\n";
    
    std::cout << "--- Exercise 3.1.2 ---\n";
    Stack s;
    int x = 0;
    
    // Test 1: Empty stack
    exercise_3_1_2(s, x);
    std::cout << "Top of empty stack (should be INT_MAX): " << x << "\n";
    
    // Test 2: Stack with elements
    s.push(42);
    s.push(99);
    exercise_3_1_2(s, x);
    std::cout << "Top of stack (should be 99): " << x << "\n";
    std::cout << "Stack size after peek (should still be 2): " << s.size() << "\n";
}

int main() {
    do_exercises();
    return 0;
}
