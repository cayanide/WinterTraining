#include <iostream>
using namespace std;
int search(int arr[], int n, int x){

  int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x){
            int temp=i+1;
            return temp;
        }
    return -1;
}

int main(){

 int array[50]={0};

 for(int i=0;i<10;i++){
    
    cin>>array[i];

 }
 int item;
 cin>>item;

int index = search(array, 10, item);
 if (index == -1)
        cout << "ELEMENT NOT FOUND";
    else
        cout << index;
    return 0;

}