#include<iostream>
using namespace std;

class Car{
    private:
    int seats;
    string name;
    public:
    Car(){
        cout<<"Not any parameter";//Non parameterized constructor
    }
    Car(int seats, string name){
        this->seats=seats;
        this->name=name;
        cout<<"\nseats: "<<seats<<endl;
        cout<<"name:"<<name;
    }

};
int main (){

    Car c0;
    Car c1(5,"Dezire");

}