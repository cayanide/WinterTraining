#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int n;
 cin>>n;
 int a[n];
 for(int i =0; i<n; i++)
 {
 cin>>a[i];
 }
 int count = 0;
 for(int i = 0; i<n; i++)
 {
 if(a[i]>18)
 {
 count++;
 }
 }
cout<<count;
 return 0;
}