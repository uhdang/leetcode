#include "Solution.h"

int Solution::numberOfSteps(int num) {
    int tmp = num;
    int count = 0;

    while (tmp != 0) {
        if (tmp % 2 == 1) {
            tmp -= 1;
        } else {
            tmp /= 2;
        }
        count += 1;
    }
    return count;
}