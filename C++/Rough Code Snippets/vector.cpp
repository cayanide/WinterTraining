#include<iostream>

using namespace std;
#include<vector>
using std::vector;
int main(){
    
    vector<int> myVec;
    myVec={1,2,3,4,5};
    for(int i:myVec)
        cout<<i<<endl;
    

}