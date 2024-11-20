#include<iostream>
using namespace std;
class Student {
    private:
    int age;
    string name;
    public:
   Student(int age , string name){
    this->name=name;
    this->age=age;
   }
 void display(){
    cout<<"Name is : "<<name<<endl;
    cout<<"Age is : "<<age<<endl;

 }
};
int main (){

    Student s1={18,"Keshav"};
    s1.display();


    return 0 ;
}