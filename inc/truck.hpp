//
//  truck.hpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef truck_hpp
#define truck_hpp

#include <stdio.h>
#include <string>
#include "car.hpp"
/**
 * @brief Abstract class for Trucks
 * 
 */
class Truck : public Car::Car{
public:
    /**
     * @brief Construct a new Truck object
     * 
     */
    Truck();
    /**
     * @brief Perform special truck function
     * 
     */
    virtual void performSpecialFunc()=0;
};

#endif /* truck_hpp */
