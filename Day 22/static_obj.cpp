#include<iostream>
using namespace std;

class Example {
    public:

    Example(){
        cout<<"Constructor.."<<endl;
        
    }

    ~Example(){
        cout<<"Destructor.."<<endl;
 
    }
};
int main (){

    int a=0;
    if(0==a){
       static Example eg1;
    }
    cout<<"Code Ending..."<<endl;


    return 0;
}