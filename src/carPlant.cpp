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

std::vector<Car::Car*> CarPlant::produceCars(::Car::carType type, int count, int waterCapacity){
    
    std::vector<Car::Car*> cars;
    Car::Car* car;
    if(type == 3){
        car=new FireTruck(waterCapacity);
    }
    else{
        car = new Car::Car(type);
    }
    for (int i = 0; i < count; i++) {
        std::cout<<"creating vehicle "<<i<<" of type "<< type<<std::endl;
        cars.push_back(car);
    }
    return cars;
}

void CarPlant::testFunc(std::vector<Car::Car*> cars){
    int i =0;
    for (auto& car : cars) {
        i++;
        std::cout<<"Testing vehicle "<<i<<std::endl;
        car->drive();
        car->makeSignal();
        if(typeid(car)== typeid(FireTruck)) {
            dynamic_cast<FireTruck*>(car)->performSpecialFunc();
            std::cout<<"Water Capacity is "<<dynamic_cast<FireTruck*>(car)->getWaterCapacity()<<std::endl;
        }
    }
}
