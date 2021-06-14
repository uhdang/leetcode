#include <iostream>
#include <vector>

#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int input[] = {2,3,5,1,3};
    vector<int> input_v (input, input + sizeof(input) / sizeof(int) );
    int extraCandies = 3;

    bool expected[] = {true, true, true, false, true};
    vector<bool> expected_v (expected, expected + sizeof(expected) / sizeof(bool) );

    vector<bool> output = solution.kidsWithCandies(input_v, extraCandies);

    for (int i = 0; i < output.size(); i++) {
        cout << expected[i] << output[i] << endl;
    }
//    cout << expected << endl;
//    cout << output << endl;

}