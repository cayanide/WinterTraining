#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
    int T,element,allu,j=0;
    unordered_map<int, int> map;

    cout<<" Enter How Many Sets Of Numbers you have "<<endl;
    cin>>T;

    for(int i=1;i<=T;i++){

        cout<<"How Many Elements In this Set?"<<endl;
        cin>>element;


        for(;j<element;j++){
           cin>>allu;
           map[allu]=j;
            }
            for(auto i:map){
                cout<<i.first<<" "<<i.second<<endl;
            }

    }
}
