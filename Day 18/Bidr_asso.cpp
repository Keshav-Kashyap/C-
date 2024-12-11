#include <iostream>
using namespace std;

class Husband; // Forward declaration

class Wife {
public:
    string name;
    Husband *husband;

    Wife(string n) : name(n), husband(nullptr) {}
    void show();
};



class Husband {
public:
    string name;
    Wife *wife;

    Husband(string n) : name(n), wife(nullptr) {}
    void show() {
        cout << name << "'s wife is " << wife->name << endl;
    }
};

 void Wife ::  show() {
        cout << name << "'s husband is " << husband->name << endl;
    }

int main() {
    Husband h1("John");
    Wife w1("Jane");

    h1.wife = &w1; // Linking both ways
    w1.husband = &h1;

    h1.show();
    w1.show();
    return 0;
}
