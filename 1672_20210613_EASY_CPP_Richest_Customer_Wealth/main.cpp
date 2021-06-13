#include <vector>

#include "Solution.h"

using namespace std;

int main() {
    Solution solution;

    int p_1[] = {1,2,3};
    int p_2[] = {3,2,1};
    vector<int> p_1_v (p_1, p_1 + sizeof(p_1) / sizeof(int) );
    vector<int> p_2_v (p_2, p_2 + sizeof(p_2) / sizeof(int) );
    vector<vector<int> >input;
    input.push_back(p_1_v);
    input.push_back(p_2_v);

    int output = solution.maximumWealth(input);
    cout << output << endl;
}