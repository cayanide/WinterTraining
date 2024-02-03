#include<iostream>

using namespace std;

/**
 * This function compares two integers and returns true if the first integer is greater than the second integer.
 * @param a The first integer to compare.
 * @param b The second integer to compare.
 * @return True if a is greater than b, false otherwise.
 */

int main(){
    int a=5,b=9;
    if(a>b){
        cout<<"a is greater than b";
    }
    else{
        cout<<"b is greater than a";
    }
    return 0;

}