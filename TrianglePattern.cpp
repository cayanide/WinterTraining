#include<iostream>

using namespace std;

int main(){
    int row;
cout << "Enter number To See Pattern" << endl;
cin >> row ;

int i=0,j=0;


while(i<row){
    while (j<i+1)
    {
        cout<< "*";
        j++;
    }
    cout<<endl;
    j=0;
    i++;

    
   
}
}