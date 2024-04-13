//
//  truck.hpp
//  Study
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef truck_hpp
#define truck_hpp

#include <stdio.h>
#include <string>
#include "car.hpp"

class Truck : public Car{
public:
    Truck();
    std::string truckType;
    Truck(std::string type);
    virtual void performSpecialFunc(){std::cout<<"nothing mentioned";};
    void getType() override;
};

#endif /* truck_hpp */
