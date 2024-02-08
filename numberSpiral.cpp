#include<iostream>
using namespace std;
 
 
  int main(){
       cout<<"Enter Number till Spiral Pattern You Want : "<<endl;
       
       
    int num,i=0,j=0,col,count;
    count=1;
    cin>>num;
    
    cout<<"Number Of division Of Columns"<<endl;
    cin>>col;
    
    while (i<num){
        while(j<col){
            if(count<=num){
            cout<<count;
            cout<<" ";
            count++;
            j++;
            }
        }
        cout<<endl;
        j=0;
        i++;
        
    }
  }
