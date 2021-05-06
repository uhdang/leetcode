#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:
        string removeVowels(string s) {
            string vowel = "aeiou";
            string output = "";

            for (int i = 0; i < s.size(); i++) {
                bool isVowel = false;
                for (int j = 0; j < vowel.size(); j++) {
                    if (s[i] == vowel[j]) {
                        isVowel = true;
                    }
                }

                if (!isVowel) {
                    output += s[i];
                }
            }
            return output;
        };
};

int main()
{
    Solution mySol;

    string input = "leetcodeisacommunityforcoders";
    string output = "ltcdscmmntyfrcdrs";

    cout << mySol.removeVowels(input) << endl;
    cout << output << endl;

    return 0;
};