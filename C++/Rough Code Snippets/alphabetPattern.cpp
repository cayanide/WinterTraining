#include<iostream>

using namespace std;

int main(){
cout<<"Running pattern matching"<<endl;

cout<<"Enter number Till Print"<<endl;

int n;
cin>>n;

cout<<"Enter Column division "<<endl;
int m;
cin>>m;

int row=1;
int col=1;
int kol=1;
while(row<=n){
    while(kol<=m){
        if(col<=n){
        char ch ='A'+col-1;
        cout<<ch<<"  ";
        col++;
        kol++;
        }
    }
    cout<<endl;
    row++;
    kol=1;
    cout<<endl;
    
}





}
