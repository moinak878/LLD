#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp

#include <iostream>
#include "car.hpp"
#include "bike.hpp"

class VehicleFactory{
    public:
        static Vehicle* getVehicle(string VehicleType);
};

#endif
