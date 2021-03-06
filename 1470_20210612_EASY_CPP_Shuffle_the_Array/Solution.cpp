#include <iostream>
#include <vector>

#include "Solution.h"

using namespace std;

vector<int> Solution::shuffle(vector<int>& nums, int n) {
        int x_start = 0;
        int x_end = n - 1;
        int y_start = n;
        int y_end = nums.size() - 1;

        vector<int> output;

        int x = x_start;
        int y= y_start;

        int switch_variable = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (switch_variable == 1) {
                output.push_back(nums.at(x));
                x += 1;
            } else {
                output.push_back(nums.at(y));
                y += 1;
            }
            switch_variable *= -1;
        }
        return output;
}




