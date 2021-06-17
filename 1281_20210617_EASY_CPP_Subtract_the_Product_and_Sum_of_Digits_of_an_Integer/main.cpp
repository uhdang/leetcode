#include <iostream>
#include <assert.h>

#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    int input = 234;
    int expected = 15;
    int output = solution.subtractProductAndSum(input);

    assert(expected == output);
//    cout << expected << output << endl;
}