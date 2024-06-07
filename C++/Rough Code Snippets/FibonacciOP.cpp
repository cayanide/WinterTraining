#include<iostream>
using namespace std;

int main(){

int n,a=0,b=1,count=1,tempB=0,c=0; 
cout<<"Enter How Many Fibboancci Sequence Elements Needed ?"<<endl;

cin>>n;

for(a=0,b=1;count<=n;count++){
if(a==0&b==1)
    cout<<a<<" ";
c=a+b;
cout<<c<<" ";
tempB=b;
b=c;

a=tempB;
    
    

}


}