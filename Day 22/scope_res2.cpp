#include<iostream>
using namespace std;

class Example{
    public:
    void show();

};
void Example :: show() {
    cout<<"This is method with scope resolution opertor"<<endl;
}

int main () {
    Example eg1;
    eg1.show();

    return 0;
}