//
// Created by Selvin Dhavidhu on 10th Dec 2025.
//

#include "leetcode/two_sum.h"
#include <ranges>
#include <unordered_map>

namespace LeetCode {
    std::vector<int> twoSum(const std::vector<int>& nums, const int target) {
        std::unordered_map<int, int> visited;
        visited.reserve(nums.size());

        for (const auto [index, value] : std::views::enumerate(nums)) {
            if (const auto it = visited.find(target - value); it != visited.end()) {
                return {it->second, static_cast<int>(index)};
            }

            visited.emplace(value, static_cast<int>(index));
        }

        return {};
    }
}
