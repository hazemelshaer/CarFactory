//
//  car.hpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef car_hpp
#define car_hpp

#include <stdio.h>
#include <string>

namespace Car {

enum carType{
    Sedan=0,
    SUV,
    Bus,
    FireTruck,
    TowTrack,
    CraneTruck
};

class Car{
private:
    std::string color;
    int weight;
    int doorNumber;
public:
    Car();
    Car(carType type, std::string wantedColor="Red");
    void drive();
    virtual void makeSignal();
    std::string getColor();
    int getWeight();
    int getDoorNumber();
};

};



#endif /* car_hpp */
