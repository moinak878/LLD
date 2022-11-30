#ifndef car_hpp
#define car_hpp

#include "vehicle.hpp"
#include<iostream>
using namespace std;

class Car:public Vehicle{
    public:
        void createVehicle();
};

#endif