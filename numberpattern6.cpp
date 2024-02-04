#include<iostream>

using namespace std;

int main(){
    int row;
cout << "Enter number To See Pattern" << endl;
cin >> row ;

int i=1,j=1,k=1;

while(k<row){
    while(j<=i){
        if(k<=row){
        cout << k << " ";
        
        k++;
        j++;
        }
        
    }
    cout << endl;
    i++;
    j=1;
}


}