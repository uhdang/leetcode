//#include <vector>
#include <iostream>

#include "Solution.h"

int main() {

    Solution solution;
    // Initialize from an array
    int input[] = {8,1,2,2,3};
    std::vector<int> input_v(std::begin(input), std::end(input));

    int expected[] = {4,0,1,1,3};
    std::vector<int> expected_v(std::begin(expected), std::end(expected));

    std::vector<int> output = solution.smallerNumbersThanCurrent(input_v);

    for (int i = 0; i < output.size(); i++) {
        std::cout << expected_v[i] << output[i] << std::endl;
    }


}