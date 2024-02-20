#include <iostream>
using namespace std;

int main(){
int row,column;
cout << "Enter row number & column numbers" << endl;
cin >> row >> column;

int i=1,j=1;

for(i=1; i<=row; i++){
    for( j=1; j<=column; j++){
        cout << "*";
    }  
    cout << endl;
   
}
}