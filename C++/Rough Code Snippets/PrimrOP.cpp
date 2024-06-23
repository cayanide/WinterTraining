#include<iostream>
using namespace std;

int main(){
    int n;
    bool check=true;
    cout<<"Enter A Number To Check Prime Or Not? : "<<endl;
    cin>>n;
    for(int i =2;i<n;i++){
        if(n%i==0){
            cout<<"Number Is Not Prime";
            check=false;
            break;
        }
    
        
    }
    if(check)
    cout<<"Number is Prime"<<endl;


}