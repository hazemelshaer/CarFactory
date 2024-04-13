//
//  carPlant.hpp
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef carPlant_hpp
#define carPlant_hpp

#include <stdio.h>
#include "car.hpp"
#include "truck.hpp"
#include "fireTruck.hpp"


// Factory interface
class CarFactory {
public:
    virtual Car* createCar() = 0;
    virtual ~CarFactory() {}
};

// Concrete Factory for creating Fire Trucks
class FireTruckFactory : public CarFactory {
public:
    Car* createCar() override {
        FireTruck* truck = new FireTruck();
        truck->setWaterCapacity(500);  // example default capacity
        return truck;
    }
    Car* createFireTruck(int capacity)  {
        FireTruck* truck = new FireTruck();
        truck->setWaterCapacity(capacity);  // Specified capacity
        return truck;
    }
    
};

// Concrete Factory for creating Sedans
class SedanFactory : public CarFactory {
public:
    Car* createCar() override {
        return new Car();
    }
};

class CarPlant {
    std::vector<Car*> cars;
public:
    CarPlant();
    ~CarPlant();
    void produceCars(CarFactory& factory, int count);
    void produceCars(CarFactory& factory, int count, int waterCapacity);
    void testFunc();
    int getCarQuantity();
};

#endif /* carPlant_hpp */
