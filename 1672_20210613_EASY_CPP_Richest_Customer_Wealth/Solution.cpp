#include <vector>

#include "Solution.h"

int Solution::maximumWealth(vector<vector<int> >& accounts) {
    int output = 0;
    for (int i = 0; i < accounts.size(); i++) {
        vector<int> th_person = accounts.at(i);
        int one_sum = 0;
        for (int j = 0; j < th_person.size(); j++) {
            one_sum += th_person[j];
        }

        if (one_sum > output) {
            output = one_sum;
        }
    }
    return output;
}