#include<iostream>

using namespace std;

class Car  {
    private:
    int no;
    string name;
    public:

    Car (int noValue, string nameValue){
        no=noValue;
        name=nameValue;
    }
    void display(){
        cout<<"Your Car Details are---"<<endl;
        cout<<"Name :" << name<< endl;
        cout<<"Number:"<< no<< endl;

    }

};

Car setValues(){
    int noVal;
    string nameVal;
    cout<<"Enter Name:"<<endl;
    cin>>nameVal;
    cout<<"Enter Number:"<<endl;
    cin>>noVal;

    return Car(noVal,nameVal);
    
}

int main  (){

    
   Car c1=setValues();
   c1.display();


    return 0;
}