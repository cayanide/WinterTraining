
#include <iostream>
using namespace std;





int main(void)
{
    bool flag = 0;
    int arr[100];
    int size;
cout<<"number of Elmemts you need => \n";
cin>>size;
cout<<"Enter Elements => \n";
	
    for(int i=0;i<size;i++){
        int sle;
        cin>>sle;
        arr[i]=sle;

    }
    	int n = size;
    for(int i=0;i<=n-1;i++){
        cout<<arr[i];
        cout<<" "<<endl;
    }
	int x ;
    cout<<"Enter Number To Find => \n";
    cin>>x;



	int i;
	for (i = 0; i < n; i++){
		if (arr[i] == x){
            flag= 1;
                                   cout<< "Element is present at index \n" ;
           cout<<i;

break;           cout<<" \n";
}else 
if(i==n-1){

    cout<<"Number not in INDEX";
}
      

    }
		
	
	return 0;
}
