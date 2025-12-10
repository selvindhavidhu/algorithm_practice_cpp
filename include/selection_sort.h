//
// Created by Selvin Dhavidhu on 10th Dec 2025.
//

#ifndef ALGORITHM_PRACTICE_CPP_SELECTION_SORT_H
#define ALGORITHM_PRACTICE_CPP_SELECTION_SORT_H

#include <vector>
#include <algorithm>
#include <cstddef>

template <typename T>
void selection_sort(std::vector<T>& arr) {
    // 1. Use std::size_t (or typename std::vector<T>::size_type) for the size and indices.
    // std::size_t is simpler and generally preferred for array indices/sizes.
    const std::size_t n = arr.size();

    // Edge case check is good practice
    if (n == 0) return;

    // The loops now use std::size_t for 'i', 'j', and 'min_idx'
    for (std::size_t i = 0; i < n - 1; ++i) {
        std::size_t min_idx = i;

        for (std::size_t j = i + 1; j < n; ++j) {
            // No type mismatch here, as j and min_idx are now unsigned
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the element at index i
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

#endif //ALGORITHM_PRACTICE_CPP_SELECTION_SORT_H