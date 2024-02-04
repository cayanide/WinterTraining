#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Your Number"<<endl;
    int n;
    cin>>n;
    int i=2;
    bool flag= false;
    while(i<n){
        if(n%i==0){
            
            flag=true;
            break;

            }
            else
            {
                i++;
                bool flag=false;
                
               
            }
        
    }
    if (flag==false)
    {
       cout<<"Number is Prime"<<endl;
    }
    else
    {
        cout<<"Number is Not Prime"<<endl;
    }
      
}