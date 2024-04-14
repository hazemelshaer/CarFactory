//
//  truck.cpp
//  Study
//
//  Created by Hazem Elshaer on 12.04.24.
//
#include <iostream>
#include "truck.hpp"

Truck::Truck(){
//    std::cout<<"Truck of type: ";
}
Truck::Truck(std::string type){
    Truck::truckType=type;
}
void Truck::getType(){
    std::cout<<"Truck"<<std::endl;
}
