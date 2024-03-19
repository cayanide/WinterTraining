#include<iostream>

using namespace std;

int main()
{
    int n;
    long long int temp=0;
    cin>>n;
   long long int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        temp=temp+a[i];
    }
    cout<<temp;
    return 0;
}