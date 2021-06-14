#include "Solution.h"

int Solution::numIdenticalPairs(std::vector<int>& nums) {
    int count = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums.size(); j++) {
            if (i < j && nums[i] == nums[j]) {
                count += 1;
            }
        }
    }
    return count;
}