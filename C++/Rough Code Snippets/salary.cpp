#include<iostream>
using namespace std;

int main(){

    /*Q1) write a programme to to take the user input for the salary and give an bonous to every wmployee that have a salary margine greater than 10000*/


    int salary,netsal;
     cout<<"enter the salary"<<endl;

    cin>>salary;


    if(salary>10000){
int bonus= (salary/100*20);
netsal=salary+bonus;

cout<<"the net salary is "<<netsal<<endl;

    }
    else{
      
      cout<<"the net salary is "<<salary<<endl;
        

    }


}