#include<iostream>
#include<fstream>
using namespace std;

int main (){

// ofstream fout;
// fout.open("Demo.txt");
// fout<<"This is my file";

ifstream fin;
char ch;
fin.open("Demo.txt");

while(!fin.eof()){
ch=fin.get();
cout<<ch;

}




    return 0;
}