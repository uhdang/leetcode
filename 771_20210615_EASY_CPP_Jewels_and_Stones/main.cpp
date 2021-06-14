#include <iostream>
#include <string>

#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    string jewels = "aA";
    string stones = "aAAbbbb";

    int expected = 3;

    int output = solution.numJewelsInStones(jewels, stones);
//    cout << "expected: " + expected << ", output: " + output << endl;
    cout << expected << output << endl;
}