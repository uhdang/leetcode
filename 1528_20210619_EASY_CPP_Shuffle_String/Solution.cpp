#include <vector>
#include <string>
#include "Solution.h"

std::string Solution::restoreString(std::string s, std::vector<int>& indices) {
    char arr[indices.size()];
    for (int i = 0; i < indices.size(); i++) {
        int index = indices[i];
        arr[index] = s[i];
    }

//    std::string st(arr);
    std::string st = "";
    for (int i = 0; i < s.length(); i++) {
        st += arr[i];
    }
    return st;
}