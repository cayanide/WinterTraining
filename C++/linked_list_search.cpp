#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    //cout<<"Enter the size of the array";
    cin>>n;
    if(n<5||n>=15){
        cout<<"Invalid Input";
        return 0;
    }
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int brr[(int)n/2];
    for(int i=0;i<(int)n/2;i++){
        int rev=0;
        int num=arr[i];
        while(num>0){
            int rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        brr[i]=rev;
    }
    int i=0;
    int j=n-1;
    int flag=0;
    while(i<(int)n/2&&j>n/2){
        if(brr[i]==arr[j]){
            i++;
            j--;
            continue;
        }
        else{
            flag=1;
        }
        i++;
        j--;
    }
    if(flag==0){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
    return 0;
}