#include<iostream>
using namespace std;

int main(){
    int a = 1230;
    cout<<a<<endl;

    char b ='V' ;
    cout<<b<<endl;

    float f = 1.54;
    cout<<f<<endl;

    double d = 1.54;
    cout<<d<<endl;

    bool TF = true;
    cout<<TF<<endl;
int size;

     size = sizeof(a);
    cout<<"size of A is : "<<size<<endl;

      size = sizeof(b);
     cout<<"size of B is : "<<size<<endl;

      size = sizeof(f);
     cout<<"size of F is : "<<size<<endl;

      size = sizeof(d);
     cout<<"size of D is : "<<size<<endl;

      size = sizeof(TF);
     cout<<"size of TF is : "<<size<<endl;


}