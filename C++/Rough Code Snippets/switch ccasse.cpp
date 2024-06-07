#include <iostream>
using namespace std;

int main(){

cout<<"Enter two Number For Operation\n";


int num1;
int num2;
cin>>num1>>num2;

cout<<"Enter Operator";

char op;

cin>>op;
switch (op)
{
case '+':

    cout<<num1+num2<<endl;
    break;
case '-':
   
    cout<<num1-num2<<endl;
    break;
case '*':
   
    cout<<num1*num2<<endl;
    break;
case '/':
   
    cout<<num1/num2<<endl;
    break;

default:
    cout<<"INVALID OPERATION";
    break;
}
return 0;


}