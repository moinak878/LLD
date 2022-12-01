#include<iostream>
using namespace std;

// <<interface Product>>
class Product{
    public:
        virtual ~Product(){};
        virtual string operations()=0;
        //  virtual string operations() const =0;
};

//<<concrete classes Product>> is-a relationship
class ConcreteProduct1 : public Product{
    public:
        // string operations() const override { }
        string operations(){
            return "{ConcreteProduct1 operation}";
        }
};
class ConcreteProduct2 : public Product{
    public:
        string operations(){
            return "{ConcreteProduct2 operation}";
        }
};

// <<Creator class interface>>
class Creator{
    public:
        virtual Product* Factory()=0;
        void operation(){
            Product *p = this->Factory();
            cout<<"creator code worked with "<<p->operations();
        }
};

// concrete creator classes for product1 and product2
class ConcreteCreator1:public Creator{
    public:
        Product *Factory(){
            return new ConcreteProduct1();
        }
};
class ConcreteCreator2:public Creator{
    public:
        Product *Factory(){
            return new ConcreteProduct2();
        }
};

// client code
void ClientCode(Creator& creator){
    creator.operation();
}

int main(){
    Creator* creator1 = new ConcreteCreator1();
    ClientCode(*creator1);

    cout<<endl;
    
    Creator* creator2 = new ConcreteCreator2();
    ClientCode(*creator2);


    return 0;
}





