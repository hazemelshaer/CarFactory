//
//  carPlant.cpp
//  Study
//
//  Created by Hazem Elshaer on 12.04.24.
//
#include <iostream>
#include "carPlant.hpp"


void CarPlant::produceCars(CarFactory& factory, int count){
    for (int i = 0; i < count; i++) {
        cars.push_back(factory.createCar());
    }
}

void CarPlant::produceCars(CarFactory& factory, int count, int waterCapacity=-1){
    for (int i = 0; i < count; i++) {
        FireTruck* ft=dynamic_cast<FireTruck*>(factory.createCar());
        ft->setWaterCapacity(waterCapacity);
        cars.push_back(ft);
    }
}

void CarPlant::testFunc(){
    int i =0;
    for (Car* car : cars) {
        i++;
        std::cout<<"Testing vehicle "<<i<<std::endl;
        car->drive();
        car->makeSignal();
        // Use dynamic_cast to check if the car is a FireTruck
        FireTruck* ft = dynamic_cast<FireTruck*>(car);
        if (ft) {
            ft->performSpecialFunc();
            std::cout<<"Water Capacity is "<<ft->getWaterCapacity()<<std::endl;
        }
    }
}

int CarPlant::getCarQuantity(){
    return (int)cars.size();
}
CarPlant::CarPlant() {
    std::cout<<"Car Plant created"<<std::endl;
}
CarPlant::~CarPlant() {
    for (Car* car : cars) {
        delete car;
    }
    cars.clear();
}
