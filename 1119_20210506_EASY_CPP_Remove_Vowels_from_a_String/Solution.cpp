//#include "Solution.h"
#include <iostream>

using namespace std;

class Solution {
    public:
        string removeVowels(string s) {
            std::cout << "removeVowels" << std::endl;
            return s;
        };
};

int main()
{
    string input = "leetcodeisacommunityforcoders";
    string output = "ltcdscmmntyfrcdrs";

    cout << Solution::removeVowels("removeVowels") << endl;
    return 0;
}