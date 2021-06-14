#include "Solution.h"

using namespace std;

int main() {
    Solution solution;
    int input[] = {1,2,3,1,1,3};
    vector<int> input_v (input, input + sizeof(input) / sizeof(int) );

    int output = solution.numIdenticalPairs(input_v);

    cout << output << endl;


}