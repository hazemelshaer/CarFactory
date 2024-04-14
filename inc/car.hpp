//
//  car.hpp
//  Study
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef car_hpp
#define car_hpp

#include <stdio.h>
#include <string>

class Car{
    std::string color;
    int weight;
    int doorNumber;
public:
    std::string carType;
    Car();
    Car(std::string type);
    void drive();
    virtual void makeSignal();
    std::string getColor();
    int getWeight();
    int getDoorNumber();
    virtual void getType();
    
};
#endif /* car_hpp */
