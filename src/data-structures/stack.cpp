#include "data-structures/stack.h"

namespace data_structures {

void Stack::push(const StackElement& value) {
    elements.push_back(value);
}

void Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    elements.pop_back();
}

StackElement& Stack::top() {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return elements.back();
}

const StackElement& Stack::top() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack is empty");
    }
    return elements.back();
}

bool Stack::isEmpty() const {
    return elements.empty();
}

size_t Stack::size() const {
    return elements.size();
}

} // namespace data_structures
