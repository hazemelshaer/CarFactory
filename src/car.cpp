//
//  car.cpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//

#include <iostream>
#include "car.hpp"

Car::Car::Car(){
    color="Red";
    weight = 120;
    doorNumber=4;
}
Car::Car::Car(carType type, std::string wantedColor){
    switch (type) {
        case 0:
            color=wantedColor;
            weight = 1200;
            doorNumber=4;
            break;
        case 1:
            color=wantedColor;
            weight = 2200;
            doorNumber=5;
            break;
        case 2:
            color=wantedColor;
            weight = 5000;
            doorNumber=3;
            break;
        case 3:
            color=wantedColor;
            weight = 6000;
            doorNumber=4;
            break;
        default:
            color=wantedColor;
            weight = 1200;
            doorNumber=4;
            break;
    }
}
void Car::Car::drive(){
    std::cout<<"Driving the vehicle"<<std::endl;
}
void Car::Car::makeSignal(){
    std::cout<<"Making normal signal"<<std::endl;
}


std::string Car::Car::getColor(){
    return color;
}

int Car::Car::getWeight(){
    return weight;
}

int Car::Car::getDoorNumber(){
    return doorNumber;
}
