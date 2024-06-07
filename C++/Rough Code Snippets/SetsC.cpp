#include<iostream>
using namespace std;
#include <set>
#include<vector>

set<int> findUnion(set<int> arr1,set<int> arr2,int n,int m,set<int> Union){

Union.insert(arr1,arr2);

return Union;
}
vector<int> main(){

    
    int n,m,element;



    cout<<"Enter Array 1 Size : "<<endl;
    cin>>n;
    cout<<"Enter Array 2 Size : "<<endl;
    cin>>m;

std::set<int> arr1;
std::set<int> arr2;



 for(int i =0;i<n;i++){
    cin>>element;
    arr1.insert(element);
}
for(int j=0;j<m;j++){
    cin>>element;
    arr2.insert(element);

}


set<int> Unions;
Unions= findUnion(arr1,arr2,n,m,Unions);

vector <int> result(Unions.begin(),Unions.end());

for (int num : Unions) {
    std::cout << num << " ";
}
std::cout << std::endl;

return result;



}