#include <iostream>
using namespace std;

int main(){


cout<<"Enter Number\n";

int num;

cin>>num;

if(num%2==0 && num%3==0){
    cout<<"Number Is Divisible BY Both 2 &3 ";
}
else if(num%2==0 || num%3==0){
    if(num%2==0){
        cout<<"Number Divisible by 2";
    }
    else{
        cout<<"Number Disivble By 3";
    }
}
else{
    cout<<"number Is not divisble By 2 &3";
}

    return 0;
}