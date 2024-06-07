#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

 
 int c=0;
 int n;
 int a;
 cin>>n;
 if(n>0 && n<=20)
 {
 char arr[n];
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 a=arr[i];
 if(a>=97 && a<=122)
 c=c+1;
 }
 if (c==0)
 cout<<-1;
 else
 cout<<c;
 }
 else
 {
 cout<<"Invalid array size";
 }
 return 0;
}