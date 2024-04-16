//
//  fireTruck.cpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//
#include <iostream>
#include "fireTruck.hpp"


void FireTruck::makeSpecialSignal() {
 std::cout<<"Performing special fire truck signal"<<std::endl;
}
int FireTruck::getWaterCapacity(){
    return FireTruck::waterCapacity;
}
void FireTruck::performSpecialFunc(){
    std::cout<<"Putting out fire"<<std::endl;
}
FireTruck::FireTruck(int capacity){
    waterCapacity=capacity;
}
