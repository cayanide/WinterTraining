#include<iostream>
using namespace std;

int main(){


    cout<<"How many stars at Borders? "<<endl;
    int star,i=0,j=0;
    cin>>star;

    while(i<star){
        
        while(j<star){
            
if(i==0 || j==0 || i==star-1 || j==star-1){
    cout<<" * ";
    
}
else {
    cout<<"   ";
}
            
         
            j++;

        }
        cout<<endl;
        
        j=0;
        i++;
       


    }


}
