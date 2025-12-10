//
// Created by Selvin Dhavidhu on 10th Dec 2025.
//

#include "gtest/gtest.h"
#include "leetcode/two_sum.h"
#include <vector>
#include <algorithm>

using namespace LeetCode;

TEST(TwoSumTest, ExampleCase1) {
    std::vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    std::vector<int> actual = twoSum(nums, target);
    std::vector<int> expected = {0, 1};

    // Sort both to ensure order doesn't fail the test
    std::sort(actual.begin(), actual.end());
    std::sort(expected.begin(), expected.end());

    ASSERT_EQ(actual, expected);
}

TEST(TwoSumTest, ExampleCase2) {
    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    std::vector<int> actual = twoSum(nums, target);
    std::vector<int> expected = {1, 2};

    std::sort(actual.begin(), actual.end());
    std::sort(expected.begin(), expected.end());

    ASSERT_EQ(actual, expected);
}

TEST(TwoSumTest, HandlesNegativeNumbers) {
    std::vector<int> nums = {-1, -2, -3, -4, -5};
    int target = -8;
    std::vector<int> actual = twoSum(nums, target);
    std::vector<int> expected = {2, 4}; // -3 + -5 = -8

    std::sort(actual.begin(), actual.end());
    std::sort(expected.begin(), expected.end());

    ASSERT_EQ(actual, expected);
}

// You can add more edge case tests here if you wish!