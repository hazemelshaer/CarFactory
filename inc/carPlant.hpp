//
//  carPlant.hpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef carPlant_hpp
#define carPlant_hpp

#include <stdio.h>
#include "car.hpp"
#include "truck.hpp"
#include "fireTruck.hpp"


class CarPlant {
public:
    CarPlant();
    std::vector<Car::Car*> produceCars(::Car::carType type, int count, int waterCapacity=0);
    void testFunc(std::vector<Car::Car*> cars);
};

#endif /* carPlant_hpp */
