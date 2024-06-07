#include <iostream>
using namespace std;

int factorial(int num){
int fact=1;
       for(int i=1;i<=num;i++){
           fact=fact*i;
           }
        return fact;

    }
int main(){

    int a;
    int b;
    cout<<"Enter Two Numbers=> \n";
    cin>>a>>b;

    cout<<"Factorial Of Number 1 Is => "<<factorial(a)<<" \n";

    cout<<"Factorial Of Number 2 Is => "<<factorial(b)<<" \n";

    return 0;
}