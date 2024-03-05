#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout<<"Enter Number To check => ";
int numMain;
cin>>numMain;
int num = numMain;
int lastdigit;
int all=0;

while(num>0){
    int lastdigit=num%10;
   
    all+=pow(lastdigit,3);
     num=num/10;
     
     

}

if(all==numMain){
    cout<<"ARMSTRONG NUMBER";
}
else{
    cout<<"NOT ARMSTRONG NUMBER";
}
    return 0;
}