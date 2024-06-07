#include <iostream>
using namespace std;

int main() {
    int n,x,y,tmp,sum,sumtemp;
    cin>>n;
    int a[n]={0};
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    cin>>y;
    tmp=y;
    sum=0;
    while(y>0){
        sum+=y%10;
        y/=10;
    }
    sumtemp=sum;
    if(sum>n){
        sumtemp=0;
        while(sum>0){
            sumtemp+=sum%10;
            sum/=10;
        }
    }
    if(n<=3){
        cout<<"Insertion is not possible becouse Array Overflow.. !!";
          endl (cout);   
    }else{
        for(int z=x-1;z>=sumtemp-1;z--){
            a[z+1]=a[z];
        }
        a[sumtemp-1]=tmp;
    }
    for(int g=0;g<n;g++){
        if(a[g]>=9){
            cout<<a[g]<<"      ";
        }else{
            cout<<a[g]<<"       ";
        }
    }
}