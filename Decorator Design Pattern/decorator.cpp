#include<iostream>
using namespace std;

// <<Pizza Interface>>
class IPizza{
public:
    virtual int getCost()=0;
};

// Base Pizzas 
class Margherita:public IPizza{
public:
    int getCost(){
            return 100;
        }
};

class PizzaMania:public IPizza{
public:
    int getCost(){
        return 70;
    }
};

// Decorators : 'has-a' Pizza in it and 'is-a' Pizza 
class ExtraCheesePizza:public IPizza{
    IPizza *basePizza;
public:
    ExtraCheesePizza(IPizza *pizza){
        basePizza=pizza;
    }
    int getCost(){
        return basePizza->getCost()+45;
    }
};

class MushroomPizza:public IPizza{
    IPizza *basePizza;
public:
    MushroomPizza(IPizza *pizza){
        basePizza=pizza;
    }
    int getCost(){
        return basePizza->getCost()+40;
    }
};

int main(){
    // show cost of Margherita
    Margherita *margheritaPizza = new Margherita();
    cout<<"margherita : "<<margheritaPizza->getCost()<<endl;

    // margherita with extra cheese
    cout<<"Margherita with Extra Cheese : "<<ExtraCheesePizza(margheritaPizza).getCost()<<endl;

    // PizzaMania Mushroom with Extra Cheese
    cout<<"PizzaMania Mushroom with Extra Cheese : ";
    cout<<ExtraCheesePizza(new MushroomPizza(new PizzaMania())).getCost()<<endl;
    // PizzaMania *pizzaManiaPizza = new PizzaMania();
    // MushroomPizza *mushroomPizzaMania = new MushroomPizza(pizzaManiaPizza);
    // ExtraCheesePizza *extraCheesePizzaManiaMushroom = new ExtraCheesePizza(mushroomPizzaMania);
    

    return 0;
}