#include "data-structures/stack.h"

namespace data_structures {

void stack::push(const value_type& value) {
    m_elements.push_back(value);
}

void stack::pop() {
    if (empty()) {
        throw std::out_of_range("Stack is empty");
    }
    m_elements.pop_back();
}

stack::value_type& stack::top() {
    if (empty()) {
        throw std::out_of_range("Stack is empty");
    }
    return m_elements.back();
}

const stack::value_type& stack::top() const {
    if (empty()) {
        throw std::out_of_range("Stack is empty");
    }
    return m_elements.back();
}

bool stack::empty() const {
    return m_elements.empty();
}

stack::size_type stack::size() const {
    return m_elements.size();
}

} // namespace data_structures
