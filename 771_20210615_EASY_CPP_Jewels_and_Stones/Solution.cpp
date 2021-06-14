#include <string>

#include "Solution.h"

int Solution::numJewelsInStones(std::string jewels, std::string stones) {
    int count = 0;
    for (int i = 0; i < stones.size(); i++) {
        char stone = stones[i];

        for (int j = 0; j < jewels.size(); j++) {
            char jewel = jewels[j];
            if (stone == jewel) {
                count += 1;
            }
        }
    }
    return count;
}