#include <iostream>
using namespace std;

#include<set>


int main(){


    set<int> set1;

    set1.insert(1);
    set1.insert(3);
    set1.insert(2);
    set1.insert(5);
    set1.insert(6);

for(auto elem: set1)
{
    cout<< elem<<" ";
}
            cout<<endl;
int n,m;


for(int i =1;i<=2;i++){
 cout<<" Enter Size of Array " << i<<endl;
    if(i==1)
    cin>>n;
    if(i==2)
    cin>>m;
  }

  set<int> set2;
  set<int> set3;
  set<int> unions ;
  int elements;
  for(int j=1;j<=n;j++){
    cin>>elements;
    set2.insert(elements);
  }


cout<<" Set 1 Has  : " << endl;

for(auto elemt: set2)
{
    cout<<elemt<<" ";
}
cout<<endl;

  for(int k =1; k<=m;k++)
  {
    cin>>elements;
    set2.insert(elements);
  }
cout<<" Set 2 Has  : " << endl;

for(auto elemr: set3)
{
    cout<<elemr<<"  ";
}

cout<<endl;

unions = set2;
unions.insert(set3.begin(),set3.end());

for(auto elems: unions)
{
    cout<<elems<< "  ";
}
cout<<endl;



return 0;




}

