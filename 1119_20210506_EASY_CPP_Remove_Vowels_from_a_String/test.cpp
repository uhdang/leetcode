#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

int main()
{
    Solution mySol;

    string input = "leetcodeisacommunityforcoders";
    string output = "ltcdscmmntyfrcdrs";

    cout << mySol.removeVowels(input) << endl;
    cout << output << endl;

    return 0;
};