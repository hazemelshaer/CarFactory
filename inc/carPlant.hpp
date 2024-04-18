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
/**
 * @brief Construct a new Car Factory object
 * 
 */
    CarPlant();
    /**
     * @brief Produce cars of specefic type, color and if applicable waterCapacity
     * 
     * @param type 
     * @param count 
     * @param wantedColor 
     * @param waterCapacity 
     * @return std::vector<Car::Car*> 
     */
    std::vector<Car::Car*> produceCars(::Car::carType type, int count,std::string wantedColor="Red", int waterCapacity=0);
    /**
     * @brief test the passed cars basic functions
     * 
     * @param cars 
     */
    void testFunc(std::vector<Car::Car*> cars);
};

#endif /* carPlant_hpp */
