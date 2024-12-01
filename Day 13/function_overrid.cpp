#include<iostream>
using namespace std;
 class Parent {
    public:
    void show(){
        cout<<"Parent is showing..."<<endl;
    }
 };
 class Child : public Parent {
    public:
    void show(){
        cout<<"Child is showing..."<<endl;
    }
 };
 int main (){
 Child obj;
 obj.show();
 return 0;
 }