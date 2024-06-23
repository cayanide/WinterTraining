#include<iostream>
using namespace std;

int solution(int n){

    int temp=0;
    while(n!=0){
        if(n&1){
            temp++;
        }
        n=n>>1;

    }

    return temp;


};

int main(){

    int n = 00000000000001011;

    int sol=  solution(n);

cout<<sol<<endl;
    return sol;

}
