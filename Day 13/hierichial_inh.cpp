#include<iostream>
using namespace std;

// Base class
class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
    void breath(){
        cout<<"Breathing..."<<endl;

    }

};

// Derived class inheriting from Animal
class Fish : public Animal {
    public:
    void swim(){
        cout<<"Swiming..."<<endl;

    }
};

// Another derived class inheriting from Animal
class Dog : public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }

};

// Another derived class inheriting from Animal
class Lion : public Animal{
    public:
    void roar(){
        cout<<"Roaring..."<<endl;
    }
};
int main (){

    //Fish Object
    Fish objFish;
    cout<<"For Fish:"<<endl; 
    objFish.eat();// Inherited from Animal
    objFish.breath();// Inherited from Animal
    objFish.swim();// Specific to Fish
    
    //Dog Object
    Dog objDog;
    cout<<"For Dog:"<<endl;
    objDog.eat();// Inherited from Animal
    objDog.breath();// Inherited from Animal
    objDog.bark();// Specific to Dog

    //Lion Object
    Lion objLion;
    cout<<"For Lion:"<<endl;
    objLion.eat();// Inherited from Animal
    objLion.breath();// Inherited from Animal
    objLion.roar();// Specific to Lion  


    return 0;
}