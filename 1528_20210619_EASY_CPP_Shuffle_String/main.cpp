#include <iostream>
#include <string>
#include <vector>

#include "Solution.h"
#include "Solution_two.h"

int main() {
    Solution solution;
    Solution_two solution_two;

    std::string s = "codeleet";

    int indices_array[] = {4,5,6,7,0,2,1,3};
    std::vector<int> indices_v (indices_array, indices_array + sizeof(indices_array) / sizeof(indices_array[0]) );

    std::string output = solution.restoreString(s, indices_v);
    std::cout << output << std::endl;

    std::string output_2 = solution_two.restoreString(s, indices_v);
    std::cout << output_2 << std::endl;
    return 1;
}