#include<iostream>
using namespace std;
class Car {
    public:
    string color;
    string name;

    Car(string name, string color){
        this->name=name;
        this->color=color;

    }
};
int main  (){
    Car c1("Dezire","white");
    
    Car c2(c1);
    cout<<"Name:"<<c2.name<<endl;
    cout<<"Color:"<<c2.color<<endl;
    return 0;


    
    
}