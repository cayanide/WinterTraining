#include <iostream>
using namespace std;

int main(){
cout<<"Enter NUMBER >> ";

int num;
cin>>num;

for(int i=2;i<num;i++){

    if(num%i==0){
        
        cout<<"NUMBER IS NOT PRIME\n";
        break;
    }
    else if(num%i !=0){
        if(i=num-1){
         cout<<"Number Is Prime\n";
        }
        continue; 
       
    }
   
  }
}