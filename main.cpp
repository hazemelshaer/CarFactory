#include <iostream>
#include <stdlib.h>
#include <string>
#include <memory>
#include "carPlant.hpp"
#include "car.hpp"
#include "truck.hpp"
#include "fireTruck.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    CarPlant plant;
    FireTruckFactory fireTruckFactory;
    SedanFactory sedanFactory;
    plant.produceCars(fireTruckFactory, 5); // Produce 5 Fire Trucks
    plant.produceCars(fireTruckFactory, 5, 750); // Produce 5 Fire Trucks with 750 capacity
    plant.produceCars(sedanFactory, 5);     // Produce 5 Sedans
    plant.testFunc();
    return 0;
}
