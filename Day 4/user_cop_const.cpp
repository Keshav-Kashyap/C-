#include<iostream>
using namespace std;

class Student {
    int age;
    string name;
    public:
    Student(int a, string n){
        age=a;
        name=n;

    }

    void display() {
        cout<<"Name:"<<name<<", Age:"<<age<<endl;

    }
    Student( Student &origanl){
        cout<<"Copy Orignal to new"<<endl;
        name=origanl.name;
        age=origanl.age;
         cout<<"Name:"<<name<<", Age:"<<age<<endl;

    }

};

int main () {

    Student s1(54,"keshav");
    Student s2(s1);




    return 0;
}