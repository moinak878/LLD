// Singleton design pattern - A logger system
#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

class Logger{
    static Logger* logger;
    static mutex mtx;
    // private constructor
    Logger(){
        cout<<"Logger is created!\n";
    }
    public:
        // static createLogger to create only one Logger()
        static Logger* createLogger(){
            if(logger==nullptr){ // if check to prevent unnecessary locks
                mtx.lock();
                if(logger==nullptr)
                    logger=new Logger();
                mtx.unlock();
            }
            return logger;
        }
        // log function - logs a message
        void log(string msg){
            cout<<"[Log] : "<<msg<<endl;
        }
};

Logger* Logger::logger=nullptr;
mutex Logger::mtx;

void user1log(){
    // user1 create Logger
    Logger* logger1 = Logger::createLogger();
    // user1 logs a msg
    logger1->log("hi! i am user 1");
}

void user2log(){
    // user2 create Logger
    Logger* logger2 = Logger::createLogger();
    // user2 logs a msg
    logger2->log("hi! i am user 2");
}

int main(){
    thread t1(user1log);
    thread t2(user2log);

    t1.join();
    t2.join();
    return 0;
   
}

/**
*   OUTPUT :-
*   Logger is created!
*   [Log] : hi! i am user 1
*   [Log] : hi! i am user 2
*/