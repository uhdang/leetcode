#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int input_1[] = [2,5,1,3,4,7];
    int n = 3;
    int expected_1[] = [2,3,5,4,1,7];

    vector<int> output_1 = solution.shuffle(input_1, n);

    cout << expected_1 << endl;
    cout << output_1 << endl;

    return 0;
}