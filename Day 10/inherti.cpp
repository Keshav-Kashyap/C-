#include<iostream>
using namespace std;

class Vehical{
    public:
    int wheels;
    
    void showWheels(){
      cout<<"No. Of Wheels:"<<wheels<<endl;


    }



};

class Car : public Vehical{
    public:
    string brand;
    void showBrand(){
        cout<<"Brand:"<<brand<<endl;

    }

};

int main () {

    Car Mycar;// Object of Car Class
    Mycar.wheels=4;//Inherited property
    Mycar.brand="Toyota";// Specific to Car
    Mycar.showBrand();
    Mycar.showWheels();// Inherited method

    return 0;
}