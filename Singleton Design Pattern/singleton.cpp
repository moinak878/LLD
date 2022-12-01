// Singleton design pattern - A logger system
#include<iostream>
using namespace std;

class Logger{
    static Logger* logger;
    // private constructor
    Logger(){
        cout<<"Logger is created!\n";
    }
    public:
        // static createLogger to create only one Logger()
        static Logger* createLogger(){
            if(logger==nullptr)
                return logger=new Logger();
            return logger;
        }
        // log function - logs a message
        void log(string msg){
            cout<<"[Log] : "<<msg<<endl;
        }
};

Logger* Logger::logger=nullptr;

int main(){
    // user1 create Logger
    Logger* logger1 = Logger::createLogger();
    // user1 logs a msg
    logger1->log("hi! i am user 1");
    // user2 create Logger
    Logger* logger2 = Logger::createLogger();
    // user2 logs a msg
    logger2->log("hi! i am user 2");
}