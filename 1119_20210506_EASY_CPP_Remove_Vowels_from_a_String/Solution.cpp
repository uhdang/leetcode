#include "Solution.h"
#include <iostream>

using namespace std;

string Solution::removeVowels(string s) {
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

