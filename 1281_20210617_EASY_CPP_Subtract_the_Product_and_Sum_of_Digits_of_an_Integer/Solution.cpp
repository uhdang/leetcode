
#include <string>

#include "Solution.h"

int Solution::subtractProductAndSum(int n) {
    std::string n_s = std::to_string(n);

    int prod_d = 1;
    int sum_d = 0;

    for (int i = 0; i < n_s.size(); i++) {
        int digit = n_s[i] - '0';
        prod_d *= digit;
        sum_d += digit;
    }

    return prod_d - sum_d;
}