#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input = "leetcodeisacommunityforcoders";
    string vowel = "aeiou";
//    string output = "ltcdscmmntyfrcdrs";

    string output = "";

    for (int i = 0; i < input.size(); i++) {
        bool isVowel = false;
        for (int j = 0; j < vowel.size(); j++) {
            if (input[i] == vowel[j]) {
                isVowel = true;
            }
        }

        if (!isVowel) {
            output += input[i];
        }
    }

    cout << output << endl;

    return 0;
};