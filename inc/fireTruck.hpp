//
//  fireTruck.hpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef fireTruck_hpp
#define fireTruck_hpp

#include <stdio.h>
#include "truck.hpp"

class FireTruck : public Truck{
private:
    int waterCapacity;
public:
/**
 * @brief Construct a new Fire Truck object
 * 
 * @param waterCapacity 
 */
    FireTruck(int waterCapacity);
    /**
     * @brief Get the Water Capacity object
     * 
     * @return int 
     */
    int getWaterCapacity();
    /**
     * @brief implement the truck's special function
     * 
     */
    void performSpecialFunc();
    /**
     * @brief perform special signal only for Firetrucks
     * 
     */
    void makeSpecialSignal();
};

#endif /* fireTruck_hpp */
