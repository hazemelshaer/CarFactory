//
//  car.hpp
//  CarFactory
//
//  Created by Hazem Elshaer on 12.04.24.
//

#ifndef car_hpp
#define car_hpp

#include <stdio.h>
#include <string>

namespace Car {
/**
 * @brief car type definition
 * 
 */
enum carType{
    Sedan=0,
    SUV,
    Bus,
    FireTruck,
    TowTrack,
    CraneTruck
};

class Car{
private:
    std::string color;
    int weight;
    int doorNumber;
public:
    /**
     * @brief Construct a new Car object
     * 
     */
    Car();
    /**
     * @brief Construct a new Car object
     * 
     * @param type 
     * @param wantedColor 
     */
    Car(carType type, std::string wantedColor="Red");
    /**
     * @brief basic driving function
     * 
     */
    void drive();
    /**
     * @brief make vehicle signals
     * 
     */
    virtual void makeSignal();
    /**
     * @brief Get the Color object
     * 
     * @return std::string 
     */
    std::string getColor();
    /**
     * @brief Get the Weight object
     * 
     * @return int 
     */
    int getWeight();
    /**
     * @brief Get the Door Number object
     * 
     * @return int 
     */
    int getDoorNumber();
};

};



#endif /* car_hpp */
