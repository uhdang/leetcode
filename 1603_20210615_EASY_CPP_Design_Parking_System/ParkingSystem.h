class ParkingSystem {
private:
    int b;
    int m;
    int s;

public:
    ParkingSystem(int big, int medium, int small);
    bool addCar(int carType);
};