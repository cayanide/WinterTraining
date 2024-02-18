#include<iostream>

using namespace std;

int main(){
    int row;
cout << "Enter number To See Pattern" << endl;
cin >> row ;

int i=1,j=1;


while(i<=row){
    while (j<i+1)
    {
        cout<<i;
        j++;
    }
    cout<<endl;
    j=1;
    i++;

    
   
}
}