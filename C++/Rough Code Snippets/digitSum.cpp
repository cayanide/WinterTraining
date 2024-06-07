#include<iostream>

using namespace std;

int main(){


    int num,i,temp,sum=0,rem;

    cout<<"Enter the number"<<endl;
    cin>>num;

temp=num;
    while(temp>0){
        rem=temp%10;
        sum+=rem;
        temp=temp/10;
       
    }

cout<<sum<<endl;

    }


