#include <iostream>
using namespace std;

int main(){
int row,column;
cout << "Enter number To See Pattern" << endl;
cin >> row ;
cout << "Enter Column To See Pattern" << endl;
cin >> column ;
int i=0,j=0,k=1;

while(k<=row){
    while(j<column){
        cout<<" . " <<k;
        k++;
        j++;
        
    }
    cout<<endl;
    j=0;
    i++;
}
}