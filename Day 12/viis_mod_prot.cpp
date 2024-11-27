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

class Derived : protected Base {
public:
    void show() {
        cout << "Public Var (now protected): " << publicVar << endl; // Accessible within the class
        cout << "Protected Var: " << protectedVar << endl;           // Accessible within the class
        // cout << "Private Var: " << privateVar << endl;             // Not accessible in the derived class
    }
};

int main() {
    Derived obj;
    obj.show();

    // cout << "Public Var: " << publicVar << endl; // ❌ Error: PublicVar is now protected in Derived
    // Protected and Private members are also not accessible here.
    cout << "Main Function cannot directly access any member of the Base class in Protected Mode." << endl;
    return 0;
}
