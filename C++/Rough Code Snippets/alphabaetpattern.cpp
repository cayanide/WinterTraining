#include<iostream>

using namespace std;

int main(){
cout<<"Running pattern matching"<<endl;
cout<<"Enter number of rows"<<endl;

int n;
cin>>n;
int row=1;
while(row<=n){
    int col=1;
    while(col<=n){
     char ch ='A'+row-1;
        cout<<ch;
        col++;
}
cout<<endl;
row++;



//Hello world


}
}