#include<iostream>

using namespace std;

int main(){
int num;
bool flag=0;
cout<<"Enter Number To Check Prime => ";
cin>>num;


    for(int i=2;i<num; i++){
        if(num%i==0){
            cout<<"number is not Prime"<<endl;

            flag=1;
            
            break;
        }
  
    }
   if(flag==0){
        
        cout<<"Prime"<<endl;

     }
}