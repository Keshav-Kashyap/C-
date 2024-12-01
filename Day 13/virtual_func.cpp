#include<iostream>
using namespace std;
 class Parent{
    public:
    
    virtual void show (){
cout<<"Parent Hello.."<<endl;
    }
 };
 class Child : public Parent{
  void show (){
cout<<"child Hello.."<<endl;
    }



 };
 int main (){

    Child child1;
    Parent *ptr;

    ptr=&child1;
    ptr->show();
    


    return 0;
 }