#include<iostream>
using namespace std;

class BankAc{
    private:
    double balance;
    public:
    double acc_no;
    string acc_name;
    BankAc(double b , double no, string n) : balance(b) , acc_name(n),acc_no(no){}
    void getBalance(){
        cout<<"Balance:"<< balance<<endl;

    }

};
int main (){

    BankAc ac1(10020, 3780, "keshav");
    cout<<"Account Holder Name: "<<ac1.acc_name<<endl;
    cout<<"Account Number: "<<ac1.acc_no<<endl;
    ac1.getBalance();


return 0;
}