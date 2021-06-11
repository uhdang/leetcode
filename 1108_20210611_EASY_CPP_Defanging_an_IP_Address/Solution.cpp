#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    string defangIPaddr(string address) {
        string output = "";
        for (int i = 0; i < address.size(); i++) {
             if (address[i] == '.') {
                output += "[.]";
            } else {
                output += address[i];
            }
        }
        return output;

    }
};

int main() {
    Solution solution;


    string input = "1.1.1.1";
    string expected = "1[.]1[.]1[.]1";

    cout << "expected: " + expected << endl;
    cout << "output: " + solution.defangIPaddr(input) << endl;


    return 1;
}