#include<iostream>
using namespace std;
/**
 * This function returns the size of the variable passed as an argument.
 * @param var The variable whose size needs to be determined.
 * @return The size of the variable in bytes.
 */
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

     int gh ='f';   
     cout<<gh<<endl;

     char ui = '54';
     cout<<ui<<endl;


}