#include<iostream>
using namespace std;

int x=10;
int main () {

    int x=20;
    cout<<"Gloabl:"<<::x<<endl;
    cout<<"Local:"<<x<<endl;


    return 0;
}
