#include <iostream>
using namespace std;

bool prime(int j){
    for(int i=2;i<=j;i++){
        if(j%i==0){
            return false;
        }
        else if(j=i&&j%i !=0){
            return true;
        }
    }

}

int main(){
    
int n1;
int n2;

cout<<"Enter 2 Numbers To print Prime numbers In RANge => \n";

cin>>n1>>n2;
for(int i =n1;i<=n2;i++){
if(prime(i)){
    cout<<i<<endl;
}
}
    return 0;

}