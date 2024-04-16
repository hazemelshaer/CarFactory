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
#include "car.hpp"
#include "truck.hpp"
#include "fireTruck.hpp"

using namespace std;


int main(int argc, const char * argv[]) {
    CarPlant plant;
    std::vector<Car::Car*> cars;
    cars=plant.produceCars(Car::Sedan, 5); // Produce 5 Fire Trucks
    plant.produceCars(Car::FireTruck, 5, 750); // Produce 5 Fire Trucks with 750 capacity
    plant.produceCars(Car::FireTruck, 5);     // Produce 5 Sedans
    plant.testFunc(cars);
    return 0;
}
