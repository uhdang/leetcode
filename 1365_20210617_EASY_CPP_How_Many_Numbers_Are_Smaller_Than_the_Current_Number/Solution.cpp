#include <vector>

#include "Solution.h"

std::vector<int> Solution::smallerNumbersThanCurrnet(std::vector<int>& nums) {
    std::vector<int> output;

    for (int i = 0; i < nums.size(); i++) {
        int count = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (j != i & nums[j] < nums[i]) {
                count++;
            }
        }
        output.push_back(count);
    }

    return output;
}