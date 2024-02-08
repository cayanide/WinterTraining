#include<iostream>
using namespace std;

int main(){



    
    
    int star,i=0,j=0,center;
    bool flag=true;
    
    
    
    while(flag==true){
        cout<<"How many stars at Borders?(Enter Odd Value) :  "<<endl;
        cin>>star;
        if(star%2>0){
        flag=false;
        }
        else {
            cout<<"Invalid Input"<<endl;
        }
        
    }
    
    
    
        center=star/2;
    
    
    
    

    while(i<star){
        
        while(j<star){
          if(i==0 || j==center || i==star-1 ) {
              cout<<" * ";
          } 
          else{
              cout<<"   ";
          }
          j++;
          



}
cout<<endl;
j=0;
i++;
}
}
