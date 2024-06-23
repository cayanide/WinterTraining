#include<iostream>

using namespace std;

/**
 * This function compares two integers and returns true if the first integer is greater than the second integer.
 * @param a The first integer to compare.
 * @param b The second integer to compare.
 * @return True if a is greater than b, false otherwise.
 */

int main(){
    int a,b;
    a=cin.get();
    b=cin.get();


    if(a>b){
        cout<<"a is greater than b";
    }
    else{
        cout<<"b is greater than a";
    }
    
    cout<<a<<b;

}