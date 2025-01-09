#include<iostream>
using namespace std;
class Customer
{
    string name;
    int balance, acc_number;
    public:
    Customer(string name, int balance, int acc_number){
        this->name=name;
        this->acc_number=acc_number;
        this->balance=balance;
    }
//deposite
void deposit(int amount)
{

    if(amount<=0) throw "Amount should be greater than 0";

    balance+=amount;
    cout<<amount<<" rs is Credited Successfully\n";

    
  
}
//Withdraw
void withdraw(int amount){

if(amount<=0)  throw "Amount should be greater than 0";
else if(amount>balance) throw "Your blance is low";

    
balance-=amount;
cout<<amount<<" rs is Debited Successfully\n";

}

};
int main (){

    Customer c1("Keshav", 5000,10);

    try{
    c1.deposit(-100);

    c1.withdraw(544);
    }

    catch(const char *e){
        cout<<"Expeption Occured:"<<e<<endl;

    }
    return 0;
}