#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Number";
int num;
    cin>>num;

    int reverse;



    while(num>0){
        int latdigit=num%10;
        reverse =reverse*10+latdigit;
        num=num/10;





    }

    cout<<reverse<<endl;

    return 0;
}