#include<iostream>
using namespace std;

template <class T> 
    T sum ( T a, T b){
        cout<<"Total : "<<a+b<<endl;

    }
    int main (){

        sum(56.4,45.0);

        return 0;
    }