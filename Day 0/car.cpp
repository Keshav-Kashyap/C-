#include<iostream>
using namespace std ;
class Car{
    public:
    string name;
    int price ;
    string type;
    int seats ;
};

void print(Car c){

    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}

int main (){

Car c1;
c1.name  = "DZIRE";
c1.price = 1000000;
c1.type  = "Sedan";
c1.seats = 5;

//second car

Car c2;
c2.name  = "Maruti Swift";
c2.price = 8000000;
c2.type  = "Hatchback";
c2.seats = 5;

//Third car

Car c3;
c3.name  = "Toyoto Fortuner";
c3.price = 36000000;
c3.type  = "SUV";
c3.seats = 8;
print(c1);
print(c2);
print(c3);

    return 0;
}
