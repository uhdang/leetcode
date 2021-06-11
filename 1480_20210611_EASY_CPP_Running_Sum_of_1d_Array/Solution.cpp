#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> output;
        for (int i = 1; i < nums.size() + 1; i++) {
            int sum = 0;
            for (int j = 0; j < i; j++) {
                sum += nums.at(j);
            }
            output.push_back(sum);
        }
        return output;
    }
};


int main() {
    Solution solution;
    cout << 0 << endl;
}
