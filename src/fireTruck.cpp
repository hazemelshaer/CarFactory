//
//  fireTruck.cpp
//  Study
//
//  Created by Hazem Elshaer on 12.04.24.
//
#include <iostream>
#include "fireTruck.hpp"


void FireTruck::makeSignal() {
 std::cout<<"Performing special fire truck signal"<<std::endl;
}

void FireTruck::setWaterCapacity(int capacity){
    FireTruck::waterCapacity = capacity;
}
int FireTruck::getWaterCapacity(){
    return FireTruck::waterCapacity;
}
void FireTruck::performSpecialFunc(){
    std::cout<<"Putting out fire"<<std::endl;
}
FireTruck::FireTruck(){

}
void FireTruck::getType(){
    std::cout<<"Fire Truck"<<std::endl;
}
