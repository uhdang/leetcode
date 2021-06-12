//https://leetcode.com/problems/shuffle-the-array/

#include <iostream>
#include <vector>
#include <string>

#include "Solution.h"

using namespace std;

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
