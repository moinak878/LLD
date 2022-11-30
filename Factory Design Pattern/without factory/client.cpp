#include<iostream>
#include "car.hpp"
#include "bike.hpp"
using namespace std;

int main(){
    string vehicleType;
    cin>>vehicleType;

    Vehicle *vehicle;

    if(vehicleType == "car")
        vehicle=new Car();
    else if(vehicleType == "bike")
        vehicle = new Bike();

    vehicle->createVehicle();

    return 0;
}

/**
 * Now if tomorrow Bus is added to the vehicle list 
 * We need to tell client to #include "bus.hpp"
 * and modify the if else statements according to the new classes
 * 
 * This is not done, client cant be bothered with so many new changes - 
 * the system should be scalable.
 * 
 * The above statement means to recompile vehicle and generate the vehicle library
 * and recompile the client as well. The client may not like to recompile again and again
 * 
 * THIS IS WHERE FACTORY DESIGN PATTERN COMES IN ...
 */
