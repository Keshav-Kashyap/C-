#include<iostream>
#include<string>
using namespace std;
class Student {
    private:
    // private members variables
    int age;
    string name;
    public: 
    // public methods 
    void setAge(int a){
        if(a >0)
        age=a;
    else printf("invaild age!!");
    }

    // Pulbic Method to get Age
    int getAge(){
        return age;
    }
    // Public Method to set Name
    
    void setName(string n){
        name=n;
    }
    // Public Mehtod to get Name

    string getName(){
        return name;

    }


    };

    int userAge() {
        int age;
        cout<<"Enter Age:";
        cin>>age;
        return age;
         
       
    }
  
    string userName() {
        
        string name;
     
        cout<<"Enter name:";
        cin>>name;
        return name;
    
       
    }
    

    
    // Main Function 
    int main (){
        Student s1;


        s1.setAge(userAge());
         s1.setName(userName());
         cout << "Student Name: " << s1.getName() << endl;
        cout << "Student Age: " << s1.getAge() << endl;


    }
