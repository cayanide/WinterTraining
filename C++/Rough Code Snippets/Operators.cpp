// int/int=int
// float/int=float
// double/int=double;

/**
 * This function returns the comparison of two integers.
 * 
 * @param a The first integer.
 * @param b The second integer.
 * @return The sum of a and b.
 */

#include<iostream>
using namespace std;

int main(){

    int a=2,b=3;

    bool first=(a==b);
    cout<<"A = B? " <<endl;
    cout<<first<<endl;

    bool second=(a>b);
    cout<<second<<endl;

    bool third=(a<b);
    cout<<third<<endl;

    bool fourth=(a>=b);
    cout<<fourth<<endl;

    bool fifth=(a<=b);
    cout<<fifth<<endl;

    bool sixth=(a!=b);
    cout<<sixth<<endl;  
    

   
}