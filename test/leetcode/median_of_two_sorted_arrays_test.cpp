//
// Created by Selvin Dhavidhu on 26th Aug 2026.
//

#include "gtest/gtest.h"

#include "leetcode/median_of_two_sorted_arrays.h"
#include <vector>

namespace {
    using namespace LeetCode;
}

TEST(MedianOfTwoSortedArraysTest, ExampleCase1) {
    const std::vector nums1 = {1, 3};
    const std::vector nums2 = {2};

    const auto actual = findMedianSortedArrays(nums1, nums2);
    EXPECT_DOUBLE_EQ(actual, 2.0);
}

TEST(MedianOfTwoSortedArraysTest, ExampleCase2) {
    const std::vector nums1 = {1, 2};
    const std::vector nums2 = {3, 4};

    const auto actual = findMedianSortedArrays(nums1, nums2);
    EXPECT_DOUBLE_EQ(actual, 2.5);
}

TEST(MedianOfTwoSortedArraysTest, HandlesOneEmptyArray) {
    const std::vector<int> nums1 = {};
    const std::vector nums2 = {1};

    const auto actual = findMedianSortedArrays(nums1, nums2);
    EXPECT_DOUBLE_EQ(actual, 1.0);
}

TEST(MedianOfTwoSortedArraysTest, HandlesDuplicateValues) {
    const std::vector nums1 = {0, 0};
    const std::vector nums2 = {0, 0};

    const auto actual = findMedianSortedArrays(nums1, nums2);
    EXPECT_DOUBLE_EQ(actual, 0.0);
}
