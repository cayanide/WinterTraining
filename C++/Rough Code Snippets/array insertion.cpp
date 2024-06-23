#include<iostream>
using namespace std;
#define MAX_SIZE 250 


int main(){
int Size;
int Array[MAX_SIZE];
 int LOC=0;
cout<<"Enter Size OF ARRAY => ";
 cin>>Size;

    cout<<"Please enter elements in array: ";
    for(int i=0; i<Size; i++)
    {
        cin>>Array[i];
    }
   for(int i=0; i<Size;i++){
            cout<<Array[i];
            cout<<" ";
        }
}