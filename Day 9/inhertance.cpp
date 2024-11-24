#include<iostream>
using namespace std;

// Base Class | Super Class | Parent Class 
class Animal {
    public:
    string color;
    void eat(){
        cout<<"Eating..."<<endl;
        
    }
    void breathe(){
        cout<<"Breathing..."<<endl;

    }
};

// Derived Class | Sub Class | Child Class
class Fish : public Animal{
public:
int fins;
void swim(){
    cout<<"swing..."<<endl;
}

};



int main (){
Fish f1;
f1.eat();
f1.breathe();
f1.swim();


    return 0;
}