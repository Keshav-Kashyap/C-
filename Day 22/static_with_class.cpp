 #include<iostream>
 using namespace std;

class Example {
    public:
    static int x;
};

int Example::x=0;

int main () {

    Example eg1;
    Example eg2;
    Example eg3;
    
    cout<<eg1.x++ <<endl;
    cout<<eg2.x++ <<endl;
    cout<<eg3.x++ <<endl;

    return 0;
}