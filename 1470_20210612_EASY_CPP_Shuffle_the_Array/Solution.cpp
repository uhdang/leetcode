//#include "Solution.h"
//
//vector<int> Solution::shuffle(vector<int>& nums, int n) {
//}




//https://leetcode.com/problems/shuffle-the-array/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
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
};

int main() {

    Solution solution;

    int input_01_list[] = {2,5,1,3,4,7};
    std::vector<int> input_01 (input_01_list, input_01_list + sizeof(input_01_list) / sizeof(int) );
    int n = 3;

    int output_01_list[] = {2,3,5,4,1,7};
    std::vector<int> output_01 (output_01_list, output_01_list + sizeof(output_01_list) / sizeof(int) );

    vector<int> expected_01 = solution.shuffle(input_01, n);

    cout << "expected_01: ";
    for (int i = 0; i < expected_01.size(); i++) {
        cout << expected_01.operator[](i) << " ";
    }

    cout << "output_01: ";
    for (int i = 0; i < output_01.size(); i++) {
        cout << output_01.operator[](i) << " ";
    }

    return 0;
}
