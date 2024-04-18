//
//  carPlant.cpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//
#include <iostream>
#include "carPlant.hpp"

CarPlant::CarPlant() {
    std::cout<<"Car Plant created"<<std::endl;
}

std::vector<Car::Car*> CarPlant::produceCars(::Car::carType type, int count ,std::string wantedColor, int waterCapacity){
    
    std::cout<<"Creating "<<count<<" vehicle(s)"<<std::endl;
    std::vector<Car::Car*> cars;
    Car::Car* car;
    if(type == 3){
        car=new FireTruck(waterCapacity);
    }
    else{
        car = new Car::Car(type,wantedColor);
    }
    for (int i = 0; i < count; i++) {
        cars.push_back(car);
    }
    return cars;
}

void CarPlant::testFunc(std::vector<Car::Car*> cars){
    int i =0;
    for (auto car : cars) {
        i++;
        std::cout<<"Testing vehicle "<<i<<std::endl;
        car->drive();
        car->makeSignal();
        FireTruck* fT =dynamic_cast<FireTruck*>(car);
        if(fT){
            fT->performSpecialFunc();
            std::cout<<"Water Capacity is "<<fT->getWaterCapacity()<<std::endl;
        }
    }
}
