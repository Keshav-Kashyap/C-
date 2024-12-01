#include<iostream>
using namespace std;

class Calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
};
int main (){

    Calculator obj;
    cout<<"Addition of two integers:"<<obj.add(5,10)<<endl;
    cout<<"Addition of three integers:"<<obj.add(5,10,4)<<endl;
    return 0;
}