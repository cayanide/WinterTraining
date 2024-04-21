#include<iostream>
using namespace std;
#include <set>
#include<vector>

vector<int> findUnion(int arr1,int arr2,int n,int m){



}






int main(){
    int n,m,element;



    cout<<"Enter Array 1 Size : "<<endl;
    cin>>n;
    cout<<"Enter Array 2 Size : "<<endl;
    cin>>m;

std::vector<int> arr1;
std::vector<int> arr2;



 for(int i =0;i<n;i++){
    cin>>element;
    arr1.push_back(element);
}
for(int j=0;j<m;j++){
    cin>>element;
    arr2.push_back(element);

}

vector <int> Union= findUnion(arr1,arr2,n,m);




}