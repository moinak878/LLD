// builder Design Pattern code
#include<iostream>
#include<list>
using namespace std;

class Product{
    list<string> partList;
public:
    void showProduct(){
        for(auto part:partList)
            cout<<part<<" , ";
        cout<<endl;
    }
    void addPart(string part){
        partList.push_back(part);
    }
};

// <<interface for builder>> - building a mobile phone
class IBuilder{
public:
    virtual void setOS(string os)=0;
    virtual void setRAM(string ram)=0;
    virtual void setROM(string rom)=0;
    virtual Product* getProduct()=0;
    virtual void reset()=0;
};

// <<SmartPhone builder>> concrete builder
class SmartphoneBuilder:public IBuilder{
    Product* product;
public:
    SmartphoneBuilder(){
        product=new Product();
    }
    void setOS(string os){
        product->addPart("os : "+os);
    }
    void setRAM(string ram){
        product->addPart("ram : "+ram);
    }
    void setROM(string rom){
        product->addPart("rom : "+rom);
    }
    Product* getProduct(){
        return product;
    }
    void reset(){
        delete product;
        product=new Product();
    }
};

// <<Build Director>>
class Director{
    IBuilder *builder;
public:
    Director(IBuilder *builder){
        this->builder=builder;
    }
    void buildBasicPhone(){
        builder->setOS("android");
        builder->setRAM("1 gb");
        builder->setROM("4gb");
    }
    void showBasicPhone(){
        builder->getProduct()->showProduct();
        builder->reset();
    }
};

int main(){
    SmartphoneBuilder *builder = new SmartphoneBuilder();
    Director builderDirector = Director(builder);

    // director builds and shows the basic phone
    builderDirector.buildBasicPhone();
    builderDirector.showBasicPhone();

    // building a custom phone by accessing builder obj directly
    cout<<endl;
    builder->setOS("iOS");
    builder->setRAM("4gb");
    builder->getProduct()->showProduct();

    return 0;
}

