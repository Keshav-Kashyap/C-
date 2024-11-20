#include<iostream>
using namespace std;
class MixtureExample{
    public:
    int publicVar;
    MixtureExample()
    {
        publicVar=10;
        privateVar=20;
        protectedVar=30;
    }
    void showValues(){
        cout<<"Public Variable"<<publicVar<<endl;
        cout<<"Private Variable"<<privateVar<<endl;
        cout<<"Protected Variable"<<protectedVar<<endl;
    }

    private:
    int privateVar;


    protected:
    int protectedVar;

};

class Derived : public MixtureExample{
    public:
    void showProtected(){
        cout<<"Protected Variable From Derived Clas:"<<protectedVar<<endl;

    }
};
int main (){
    MixtureExample obj;
    obj.publicVar=50;
    obj.showValues();

    Derived DerivedObj;
    DerivedObj.showProtected();

    return 0;



}