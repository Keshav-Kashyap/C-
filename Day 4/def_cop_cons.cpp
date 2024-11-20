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
    void display (){
        cout<<"Name:"<<name<<",Age:"<<age<<endl;

    }
};
int main (){
    Student s1(20,"Keshav");
    Student s2(s1);
    // s1.display();
    s2.display();
    return 0;
}