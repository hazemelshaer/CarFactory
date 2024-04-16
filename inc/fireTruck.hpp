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
    FireTruck(int waterCapacity);
    int getWaterCapacity();
    void performSpecialFunc();
    void makeSpecialSignal();
};

#endif /* fireTruck_hpp */
