#include<iostream>
using namespace std;

// << Interface : Strategy>>
class IStrategy{
public:
    virtual int cost(int time)=0;
};

// concrete CarParkingStrategy
class CarParkingStrategy : public IStrategy{
public:
    int cost(int time){
        return time*20;
    }
};

// concrete BikeParkingStrategy
class BikeParkingStrategy : public IStrategy{
public:
    int cost(int time){
        return time*10;
    }
};

// Parking Manager Interface
class IParkingManager{
    IStrategy *strategy;
public:
    void setStrategy(IStrategy *strategy){
        this->strategy = strategy;
    }
    int calculate(int time){
        return strategy->cost(time);
    }
};

// concrete CarParkingManager
class CarParkingManager:public IParkingManager{
public:
    CarParkingManager(){
        setStrategy(new CarParkingStrategy());
    }
};

// concrete BikeParkingManager
class BikeParkingManager:public IParkingManager{
public:
    BikeParkingManager(){
         setStrategy(new BikeParkingStrategy());
    }
};

int main(){
    CarParkingManager *parkmycar = new CarParkingManager();
    cout<<" Car parking cost : " <<parkmycar->calculate(2)<<endl;
    
    BikeParkingManager *parkmybike = new BikeParkingManager();
    cout<<" Bike parking cost : "<<parkmybike->calculate(2)<<endl;
    return 0;
}
