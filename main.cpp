//
//  main.cpp
//  test_cars
//
//  Created by Hazem Elshaer on 16.04.24.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <memory>
#include "carPlant.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    CarPlant plant;
    std::vector<Car::Car*> cars,fireTrucks;
    cars=plant.produceCars(Car::Sedan, 5, "Blue"); // Produce 5 blue sedans
    plant.testFunc(cars);
    fireTrucks=plant.produceCars(Car::FireTruck, 5, "Red" ,1750); // Produce 5 Fire Trucks with 750 capacity
    plant.testFunc(fireTrucks);
    return 0;
}
