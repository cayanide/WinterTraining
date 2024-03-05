#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX_SIZE 100 

int main(){

int Size;

int elementIN;
int Array[MAX_SIZE];
 int LOC=0;
bool flag=1;

 cin>>Size;


    int telement;

    cin>>telement;

    for(int i=0; i<telement;++i)
    {
        cin>>Array[i];
        
    }

    for(int i =telement;i<Size;i++){
        Array[i]=0;
    }

for(int i=0; i<=1;i++){

   int temp2= Array[i];

   int temp3=temp2%10;
   int temp4=temp2/10;


LOC=LOC+temp3+temp4;
 }



 while(flag=1){

if ( LOC<=Size){


cin>>elementIN;


    Array[LOC-1]=elementIN;



   for(int i=0; i<Size;i++){
            cout<<Array[i]<<"\t";
            //cout<<" "/t;
      flag=1;  }
}
else{
    
cin>>elementIN;


    Array[LOC-1]=elementIN;



   for(int i=0; i<Size;i++){
            cout<<Array[i]<<"\t";
            //cout<<" "/t;
    

      flag =0;
      }
 }

 }

 return 0;


}
