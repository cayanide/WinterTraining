#include <iostream>
using namespace std;

int main(){
int row,column;
cout << "Enter number To See Pattern" << endl;
cin >> row ;

int i=0,j=0,k=row;

while(i<=row){
    while(k!=row+1){
        cout<<j;
        j++; k++;
    }
    cout<<endl;
    k=1;
    j=1;
    i++;
}
}