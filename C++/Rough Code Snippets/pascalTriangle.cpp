#include <iostream>
using namespace std;

int factorial(int num){
int fact=1;
       for(int i=1;i<=num;i++){
           fact*=i;
           }
        return fact;

    }
int main(){

    int n;


    cout<<"Enter n=> \n";
     cin>>n;

for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
      cout<<factorial(n)/(factorial(n-j)*factorial(j))<<" ";
    }
    cout<<endl;
}f



return 0;
}
