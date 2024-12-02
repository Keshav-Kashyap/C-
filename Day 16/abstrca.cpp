#include<iostream>
using namespace std;
class Shape {
    public:
  virtual void draw ()=0;

};

class Circle: public Shape  {
    public:
    void draw() {
        cout<<"Draw Circle\n";

    }
};

class Sqaure: public Shape  {
    public:
    void draw() {
        cout<<"Draw Sqaure\n";

    }
};

int main (){
Circle cir1;
cir1.draw();

Sqaure squ1;
squ1.draw();

    return 0;
}