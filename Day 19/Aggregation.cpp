#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    
    Student(string n ) : name(n) {} 
    void show(){
        cout<<"Student Name:"<<name<<endl;
    }
};

class   Classroom {
    public:
    Student *student1;
    Student *student2;
    Classroom(Student *s1, Student *s2) : student1(s1), student2(s2) {}

        void showStudents(){
            cout<<"Classroom has following students :"<<endl;
            student1->show();
            student2->show();

        }
};
int main () {
    Student s1("Amit");
    Student s2("Riya");

    Classroom classroom(&s1,&s2);
    classroom.showStudents();
return 0;
}
