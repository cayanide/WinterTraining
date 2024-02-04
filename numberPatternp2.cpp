#include <iostream>
using namespace std;

int main(){
int row,column;
cout << "Enter number To See Pattern" << endl;
cin >> row ;

int i=1,j=row;

while(i<=row){

        cout<<i;

        while(j!=1){
        cout<<i;
        j--;
    }
    cout<<endl;
    j=row-i;
    i++;
    }
}