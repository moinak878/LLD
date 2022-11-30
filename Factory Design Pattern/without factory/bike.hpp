#ifndef bike_hpp
#define bike_hpp

#include "vehicle.hpp"
#include<iostream>
using namespace std;

class Bike:public Vehicle{
    public:
        void createVehicle();
};

#endif