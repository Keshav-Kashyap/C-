#include<iostream>
using namespace std;

class Animal {
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};

class Wild{
    public:
    void hunt(){
        cout<<"Hunting..."<<endl;

    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class Lion : public Animal , public Wild{
    public:
    void roar(){
        cout<<"Roaring..."<<endl;
    }
};
int main (){

    Dog objDog;
    cout<<"Dog:"<<endl;
    objDog.eat();
    objDog.bark();

    Lion objLion;
    cout<<"Lion:"<<endl;
    objLion.eat();
    objLion.hunt();


    return 0;

}