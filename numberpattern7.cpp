#include<iostream>

using namespace std;

int main(){
    int row;
cout << "Enter number To See Pattern" << endl;
cin >> row ;

int i=1,j=1,k=1;

while(i<=row){
    while (j<=i){
        cout<<(i-j+1)<<" ";
        j++;
    }
    cout<<endl;
     cout<<endl;
    i=i+1;
    j=1;
}


}