#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    while (n--)
    {
        int Array[6];
        for(int i = 0; i<6; i++){
            cin>>Array[i];
        }
        int max = Array[0];
        for(int i=1; i<6; i++){
            if(Array[i]>max){
                max = Array[i];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}