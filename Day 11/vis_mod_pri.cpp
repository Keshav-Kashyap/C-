#include <iostream>
using namespace std;

class Base {
    public:
    int publicVar = 1;

    protected:
    int protectedVar = 2;

    private:
    int privateVar = 3;
};

class Derived : private Base { // Private inheritance makes Base members private in Derived
    public:
    void show() {
        cout << "Public Var (now private in Derived): " << publicVar << endl;
        cout << "Protected Var (now private in Derived): " << protectedVar << endl;
        // The privateVar is not accessible here because private members of Base 
        // are not inherited in the Derived class.
    }
};

int main() {
    Derived obj;
    obj.show();
    cout << "We cannot access any member of the Base class directly from the object of the Derived class in the main function.  because private inheritance makes all inherited members private in the Derived class" << endl;
   cout << "However, we can access the public members of the Base class through a Base class object." << endl;
    return 0;
}
