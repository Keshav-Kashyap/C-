#include<iostream>
using namespace std;

class Student {
    int age;
    string name;
    public:
    Student(int age, string name){
        this->age=age;
        this->name=name;

    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;

    }

};

int main () {

        Student s1(18,"keshav");
        s1.display();


    return 0;
}