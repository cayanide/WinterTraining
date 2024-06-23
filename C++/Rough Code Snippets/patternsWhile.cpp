#include <iostream>
using namespace std;

int main(){
int row,column;
cout << "Enter row number & column numbers" << endl;
cin >> row >> column;

int i=1,j=1;

while(i<row){

        cout<<" * ";

        while(j<column){
        cout<<" * ";
        j++;
    }
    cout<<endl;
    j=1;
    i++;
    }
}