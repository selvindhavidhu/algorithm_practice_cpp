//
// Created by Selvin Dhavidhu on 10th Dec 2025.
//

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "leetcode/two_sum.h"
#include <vector>

namespace {
    using namespace LeetCode;
    using ::testing::UnorderedElementsAre;
}

TEST(TwoSumTest, ExampleCase1) {
    const std::vector nums = {2, 7, 11, 15};
    constexpr int target = 9;

    const auto actual = twoSum(nums, target);
    EXPECT_THAT(actual, UnorderedElementsAre(0, 1));
}

TEST(TwoSumTest, ExampleCase2) {
    const std::vector nums = {3, 2, 4};
    constexpr int target = 6;

    const auto actual = twoSum(nums, target);
    EXPECT_THAT(actual, UnorderedElementsAre(1, 2));
}

TEST(TwoSumTest, HandlesNegativeNumbers) {
    const std::vector nums = {-1, -2, -3, -4, -5};
    constexpr int target = -8;

    const auto actual = twoSum(nums, target);
    EXPECT_THAT(actual, UnorderedElementsAre(2, 4));
}