#include<iostream>
using namespace std;
class User{
    int id;
    string password;
    public: 
    string username;
    User(int id){
        this->id=id; 
    }
    void setpass(string password ){
        this->password=password;
    }
    string getpass(){
        return password;
    }
};

int main (){
    User u1(1);
    u1.username="Keshav";
    u1.setpass("keshav123");
    cout<<"User Name:"<<u1.username<<endl;
    cout<<"Password:"<<u1.getpass()<<endl;

    

}