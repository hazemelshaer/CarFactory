//
//  car.cpp
//  Study
//
//  Created by Hazem Elshaer on 12.04.24.
//

#include <iostream>
#include "car.hpp"


Car::Car(){
//    std::string type;
//    std::cout<<"Enter car Type: "<<std::endl;
//    std::cin>>type;
    carType="normal";
//    std::cout<<"Created car of Type: "<<carType<<std::endl;
//    std::transform(type.begin(), type.end(), type.begin(),
//                   [](unsigned char c){ return std::tolower(c); });
//    if ((type=="sedan") || (type=="suv") || (type=="truck"))
//        carType=type;
//    else
//        std::cout<<"Invalid car type"<<std::endl;
    
}
Car::Car(std::string type){
    if ((type=="sedan") || (type=="suv") || (type=="truck"))
        carType=type;
    else
        std::cout<<"Invalid car type"<<std::endl;
}

void Car::drive(){
    std::cout<<"Driving the vehicle"<<std::endl;
}


void Car::makeSignal(){
    std::cout<<"Making normal signal"<<std::endl;
}


std::string Car::getColor(){
    return color;
}

int Car::getWeight(){
    return weight;
}

int Car::getDoorNumber(){
    return doorNumber;
}
void Car::getType(){
    std::cout<<carType<<std::endl;
}
