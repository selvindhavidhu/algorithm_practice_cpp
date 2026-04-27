#pragma once

#include <vector>
#include <stdexcept>

namespace data_structures {

typedef int StackElement;

class Stack {
public:
    Stack() = default;
    ~Stack() = default;

    // Pushes an element onto the stack
    void push(const StackElement& value);

    // Removes the top element from the stack
    void pop();

    // Returns a reference to the top element
    StackElement& top();
    const StackElement& top() const;

    // Checks if the stack is empty
    bool isEmpty() const;

    // Returns the number of elements in the stack
    size_t size() const;

private:
    std::vector<StackElement> elements;
};

} // namespace data_structures
