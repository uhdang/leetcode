#include <vector>

#include "Solution.h"

using namespace std;

vector<bool> Solution::kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> output;

    int greatest = 0;
    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] > greatest) {
            greatest = candies[i];
        }
    }

    for (int i = 0; i < candies.size(); i++) {
        if (candies[i] + extraCandies >= greatest) {
            output.push_back(true);
        } else {
            output.push_back(false);
        }
    }

    return output;
}