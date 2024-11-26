#include<iostream>
using namespace std;

class Base {
    public:
    int publicVar=1;



    protected:
    int protectedVar=2;



    private:
    int privateVar=3;//Not Acessible in derived class 


};

class Derived : public Base {
    public:
    void show(){
        cout<<"public var: "<<publicVar <<endl;
        cout<<"protected var: "<<protectedVar <<endl;
        // cout<<"private var: "<<privateVar <<endl; 

    }
};
int main (){

    Derived obj;
    obj.show();

    cout<<"Acess Public Variable From main :"<<obj.publicVar<<endl;
    // cout<<"Acess Protected Variable from main :"<<protectedVar<<endl; // error: protected member can't accesible from outside of class
      // cout<<"Acess Private Variable from main :"<<privateVar<<endl; // error: private member can't accesible.

    return 0;
}