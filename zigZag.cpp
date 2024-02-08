#include<iostream>
using namespace std;

int main(){


    cout<<"How many stars at Borders? "<<endl;
    int star,i=0,j=0,center;
    cin>>star;
    
    
    
    
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
