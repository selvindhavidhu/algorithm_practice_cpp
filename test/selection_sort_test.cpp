//
// Created by Selvin Dhavidhu on 10th Dec 2025.
//
// algorithm_practice_cpp/test/selection_sort_test.cpp

#include "gtest/gtest.h"
#include "selection_sort.h"
#include <vector>

// 1. Basic Case: A standard array of integers
TEST(SelectionSortTest, HandlesStandardIntegers) {
    std::vector<int> input = {64, 25, 12, 22, 11};
    std::vector<int> expected = {11, 12, 22, 25, 64};
    selection_sort(input);
    ASSERT_EQ(input, expected);
}

// 2. Already Sorted Array
TEST(SelectionSortTest, HandlesAlreadySortedArray) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    selection_sort(input);
    ASSERT_EQ(input, expected);
}

// 3. Reverse Sorted Array
TEST(SelectionSortTest, HandlesReverseSortedArray) {
    std::vector<int> input = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    selection_sort(input);
    ASSERT_EQ(input, expected);
}

// 4. Array with Duplicate Elements
TEST(SelectionSortTest, HandlesDuplicates) {
    std::vector<int> input = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    std::vector<int> expected = {1, 1, 2, 3, 3, 4, 5, 5, 6, 9};
    selection_sort(input);
    ASSERT_EQ(input, expected);
}

// 5. Empty Array (Edge Case)
TEST(SelectionSortTest, HandlesEmptyArray) {
    std::vector<int> input = {};
    std::vector<int> expected = {};
    selection_sort(input);
    ASSERT_EQ(input, expected);
}

// 6. Single Element Array (Edge Case)
TEST(SelectionSortTest, HandlesSingleElementArray) {
    std::vector<int> input = {42};
    std::vector<int> expected = {42};
    selection_sort(input);
    ASSERT_EQ(input, expected);
}

// 7. Handles floating point numbers
TEST(SelectionSortTest, HandlesFloats) {
    std::vector<double> input = {3.14, 1.0, 2.71, 0.5};
    std::vector<double> expected = {0.5, 1.0, 2.71, 3.14};
    selection_sort(input);
    ASSERT_EQ(input, expected);
}

// We don't need a main function since we linked to GTest::gtest_main
// in the CMakeLists.txt file.