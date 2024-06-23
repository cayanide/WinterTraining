#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    if(n >= 5 && n < 30)
    {
    
    string arr[n];
    
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        string v = "vivek";
        bool flag = true;
        for(int j = 0; j < v.length(); j++)
        {
            if((char) tolower(arr[i][j]) != v[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            count++;
        }
    }
    
    cout<<count;
    }
    else{
        cout<<"Invalid Input";
    }
}