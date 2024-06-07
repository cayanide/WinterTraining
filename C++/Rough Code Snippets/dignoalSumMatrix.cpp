#include<iostream>

using namespace std;

int main()
{
    int n,i=0,j=0,tempD=0,tempE=0;
    cin>>n;
    int row=n,col=n;
    int arr[col][row];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }


    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=n;i<0;i--){
        tempD=tempD+arr[i][n-i-1];// i=2,0     2,
        tempE=tempE+arr[n-i-1][i];

    }


    cout<<endl;
    cout<<tempD<<endl;
    cout<<tempE<<endl;
cout<<tempD-tempE<<endl;


 }