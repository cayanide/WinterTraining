#include <iostream>
#include <stack>
using namespace std;

int main()
{
 // Empty stack
 stack<int> mystack;

 cout<<"Enter Number Of Elemnts To Push=> \n";

 int m;

cin>>m;

for(int i =1;i<=m;i++){
 int n; 
 cin>>n;
mystack.push(n);
}

bool flag=0;

while(flag==0){

cout<<"Choose An option\n";
cout<<"Press 0 For Exit \n";
cout<<"Enter 1  For Display OF STACK \n "; 
cout<<"Enter 2  For Push in STACK \n "; 
cout<<"Enter 3  For Pop in STACK \n "; 

int op;
cin>>op;

switch (op)
{
case 1 :
     while (!mystack.empty()) {
  cout << ' ' << mystack.top();
  mystack.pop();
 }
 break;
case 2:
 cout<<"Enter Number Of Elemnts To Push=>\n ";



cin>>m;

for(int i =1;i<=m;i++){
 int n;
 cin>>n;
mystack.push(n);
}
    while (!mystack.empty()) {
        cout << ' ' << mystack.top();
        mystack.pop();
    }
break;
case 3:

cout<<"Number Of Elements To Pop \n";
int poppy;
cin>>poppy;

for(int i =1;i<=poppy;i++){
mystack.pop();
}

while (!mystack.empty()) {
        cout << ' ' << mystack.top();
        mystack.pop();
    }
break;

case 0 :
flag=1;
  break;
default:
    break;
}
}



}
