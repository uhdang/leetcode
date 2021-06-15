#include <iostream>
#include <vector>
#include <string>

#include "ParkingSystem.h"

using namespace std;

int main() {

    ParkingSystem parkingSystem(1, 1, 0);
    int input[4] = {1, 2, 3, 1};
    vector<bool> output;

    for (int i = 0; i < 4; i++) {
        bool o = parkingSystem.addCar(input[i]);
        output.push_back(o);
    }

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << endl;
    }
}