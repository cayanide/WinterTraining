#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
int size;
cin>>size;

    int arr[size], tot=size, i;
    
    for(i=0; i<tot; i++)
        cin>>arr[i];
  int pos;
    cin>>pos;

    for (i =pos; i<size-1; i++)  
        {  
            arr[i] = arr[i+1]; 
        }
for(i=0;i<size-1;i++){
    
    cout<<arr[i];
       
}
      return 0;
}
