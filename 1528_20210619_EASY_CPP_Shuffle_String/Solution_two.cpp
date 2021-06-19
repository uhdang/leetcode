#include <vector>
#include <string>
#include "Solution_two.h"

std::string Solution_two::restoreString(std::string s, std::vector<int>& indices) {
    std::string temp = s;

    for (int i = 0; i < s.length(); i++) {
        int value = indices[i];
        temp[i] = s[value];
    }

    return temp;
}
