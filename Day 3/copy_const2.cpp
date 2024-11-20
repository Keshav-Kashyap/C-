#include<iostream>
using namespace std;

class Student{
    private:
    int age;
    string name;
    public:
    Student(int age, string name){
        this->age=age;
        this->name=name;

    }
    void display(){
        cout<<"Name:"<<name<<", Age: "<<age<<endl;
    }
};
int main (){

    Student s1(18,"Keshav");
    Student s2(s1);

    s1.display();    
    s2.display();    



    return 0;
}