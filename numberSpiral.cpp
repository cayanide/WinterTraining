#include<iostream>
using namespace std;
 
 
  int main(){
       cout<<"Enter Number till Spiral Pattern You Want : "<<endl;
       
       
    int num,i=0,j=1,col,count;
    count=1;
    cin>>num;
    
    cout<<"Number Of division Of Columns"<<endl;
    cin>>col;
    
    while (i<num){
        while(j<col){
            cout<<count;
            count++;
            j++;
        }
        j=0;
        i++;
        
    }
  }
