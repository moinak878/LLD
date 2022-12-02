// observer design pattern code
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

// <<Observer interface>>
class IObserver{
    public:
        virtual void notify(string msg)=0;
};

class User:public IObserver{
    int userid;
    public:
        User(int userid){
            this->userid=userid;
        }
        void notify(string msg){
            cout<<"User "<<userid<<" received : "<<msg<<"\n";
        }
};

class Group{
    list<IObserver*> observerList;
    public:
        void subscribe(IObserver* observer){
            observerList.push_back(observer);
        }
            
        void unsubscribe(IObserver* observer){
            observerList.remove(observer);
        }

        void notify(string msg){
            for(auto observer:observerList){
                observer->notify(msg);
            }
        }
};

int main(){
    Group *group = new Group();

    User *user1 = new User(1);
    User *user2 = new User(2);
    User *user3 = new User(3);

    group->subscribe(user1);
    group->subscribe(user2);
    group->subscribe(user3);

    group->notify("msg 1");

    group->unsubscribe(user1);
    cout<<"\n\n";

    group->notify("msg 2");

    return 0;
}