#include<iostream>
using namespace std;
class Teacher{
    public:
    string name;
    Teacher(string n): name(n) {}

};

class Student{
    public:
    string name;
    Teacher *teacher;
    Student(string n, Teacher *t) : name(n) , teacher(t) {}
    void show(){
        cout<<name<<"'s teacher is "<<teacher->name<<endl;

    }
};
int main (){
    Teacher t1("Mr. Vimal");
    Student s1("keshav",&t1);
    s1.show();

    return 0;
}