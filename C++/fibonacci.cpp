#include<iostream>

using namespace std;

void fib(int n){

    int t1=0;
    int t2=1;
int nextTerm;

for(int i=1;i<=n;i++){
    cout<<t1<<endl;
nextTerm=t1+t2;
t1=t2;
t2=nextTerm;
}
return;
}

int main(){

int x;
int fibb;
cout<<"input Number Till series => \n";

cin>>x;
cout<<"Fibb Series => \n";

fib(x);



return 0;

}