#include <iostream>
using namespace std;
int main(){

int size,element,pos;
    
    cout<<"Enter the Size Of array \n";
    cin>>size;
    int arr[size];
     cout<<"Enter the Number of elements To Store In\n ";
     int telement;
     cin>>telement;
   for(int i =0;i<telement;i++)
    {
        cin>>arr[i];
    }
cout<<"Enter Number to INSERT ARRAY AND POSTION INTO \n";
cin>>element;
cout<<"Enter Number  POSTION INTO \n";
cin>>pos;

    for(int i=telement; i>=pos;i--){
        arr[i+1]=arr[i];
    
    }
    arr[pos]=element;
    cout<<"Elements After Insertion \n";
    for(int i=0;i<=telement+1;i++){
        cout<<arr[i]<<" ";
        cout<<endl;

    }

    return 0;

}