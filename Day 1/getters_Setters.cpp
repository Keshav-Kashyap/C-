#include<iostream>
#include<string>
using namespace std;

class Student {
    string name;
    float cgpa;


    public:

   //Setters
     void setName( string nameval){
        name=nameval;
     }
     void setcgpa(float cgpaval){
        cgpa=cgpaval;
     }

     //Getters
     string getName(){
       return name;
     }
     float getCgpa(){
        return cgpa;
     }

};
int main (){
    Student s1;
    s1.setName("Keshav");
    s1.setcgpa(8.84);

    cout<<s1.getName()<<endl;
    cout<<s1.getCgpa()<<endl;


    return 0;
}