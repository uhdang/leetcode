#include "ParkingSystem.h"

ParkingSystem::ParkingSystem(int big, int medium, int small) {
    b = big;
    m = medium;
    s = small;
}

bool ParkingSystem::addCar(int carType) {
    if ((carType == 1 && b ==0) || (carType == 2 && m == 0) || (carType == 3 && s == 0)) {
        return false;
    } else {
        if (carType == 1) {
            b--;
        } else if (carType == 2) {
            m--;
        } else {
            s--;
        }
        return true;
    }
}