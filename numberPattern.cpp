#include <iostream>
using namespace std;

int main(){
int row,column=3;
cout << "Enter number To See Pattern" << endl;
cin >> row ;

int i=1,j=1;

while(i<=row){

        cout<<i;

        while(j<column){
        cout<<i;
        j++;
    }
    cout<<endl;
    j=1;
    i++;
    }
}