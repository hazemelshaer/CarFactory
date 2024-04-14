//
//  fireTruck.hpp
//  Study
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef fireTruck_hpp
#define fireTruck_hpp

#include <stdio.h>
#include "truck.hpp"

class FireTruck : public Truck{
    int waterCapacity;
public:
    FireTruck();
    void setWaterCapacity(int capacity);
    int getWaterCapacity();
    void performSpecialFunc();
    void makeSignal();
    void getType();
};

#endif /* fireTruck_hpp */
