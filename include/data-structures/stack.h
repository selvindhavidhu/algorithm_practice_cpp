#pragma once

#include <cstddef>
#include <stdexcept>
#include <vector>

namespace data_structures {

class stack {
public:
    using value_type = int;
    using size_type = std::size_t;

    stack() = default;
    ~stack() = default;

    // Pushes an element onto the stack
    void push(const value_type& value);

    // Removes the top element from the stack
    void pop();

    // Returns a reference to the top element
    value_type& top();
    const value_type& top() const;

    // Checks if the stack is empty
    bool empty() const;

    // Returns the number of elements in the stack
    size_type size() const;

private:
    std::vector<value_type> m_elements;
};

} // namespace data_structures
