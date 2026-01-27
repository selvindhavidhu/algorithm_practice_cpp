//
// Created by Selvin Dhavidhu on 10th Dec 2025.
//

#include "leetcode/two_sum.h"
#include <unordered_map>

namespace LeetCode {
    std::vector<int> twoSum(const std::vector<int>& nums, const int target) {
        std::unordered_map<int, int> visited;
        const auto size = nums.size();

        for (auto index = decltype(nums.size()){0}; index < size; ++index) {
            int complement = target - nums[index];
            if (auto it = visited.find(complement); it != visited.end()) {
                return {it->second, static_cast<int>(index)};
            }

            visited.insert({nums[index], index});
        }

        return {};
    }
}