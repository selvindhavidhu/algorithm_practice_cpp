#include "data-structures/stack.h"
#include <iostream>

using namespace data_structures;

// We will do the exercises from the book later here
void do_exercises() {
    std::cout << "Stack Exercises - Chapter 3\n";
    
    // Example usage
    Stack s;
    s.push(1);
    s.push(2);
    std::cout << "Stack size: " << s.size() << "\n";
    s.pop();
    std::cout << "Top element: " << s.top() << "\n";
}

// Since we have an existing algorithms library, we might not want a main function here 
// if it's meant to be compiled alongside other files into the algorithms library.
// If it's meant to be an executable, it will need a main.
// For now, let's keep it as a set of functions that can be called, or we'll add main when needed.
