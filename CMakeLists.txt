cmake_minimum_required(VERSION 3.10)

project(CarFactory)
set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)
set(CMAKE_CXX_STANDARD 17)

set(CARFACTORY_INCLUDE_DIR /Users/hazem/Xcode/CarFactory/CarFactory/inc)
set(CARFACTORY_SOURCE_DIR /Users/hazem/Xcode/CarFactory/CarFactory/src)

include_directories(${CARFACTORY_INCLUDE_DIR})
add_executable(CarFactory main.cpp ${CARFACTORY_SOURCE_DIR}/car.cpp ${CARFACTORY_SOURCE_DIR}/carPlant.cpp ${CARFACTORY_SOURCE_DIR}/truck.cpp ${CARFACTORY_SOURCE_DIR}/fireTruck.cpp)
