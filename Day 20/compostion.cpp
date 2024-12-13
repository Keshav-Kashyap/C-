#include<iostream>
using namespace std;

class Engine{
    public:
    string type;
    Engine(string t): type(t) {
        cout<<"Engine Created: "<<type<<endl;
    }

    ~Engine(){
        cout<<"Engine Destroyed:"<<type<<endl;

    }
};

class Car{
    public:
    string model;
    Engine engine;
    
    Car(string m, string eType): model(m), engine(eType) {
        cout<<"Car Created: "<<model<<endl;

    }
    ~Car(){
        cout<<"Car Destroyed: "<<model<<endl;

    }
    void show(){
        cout<<"Car Model :"<<model<<endl;
        cout<<"Engine Type:"<<engine.type<<endl;
    }


};
int main (){
    Car myCar("Tesla Model S","Electric");
    myCar.show();

    return 0;
}