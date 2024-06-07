
#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;


		if (arr[mid] == x)
			return mid;


		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);

		return binarySearch(arr, mid + 1, r, x);
	}

	return -1;
}

int main(void)
{
    int size;
    cout<<"Enter number Of elementa you need => \n";
    cin>>size;
	int arr[100];
    cout<<"Enter Elements => \n";
    for(int i=0; i<size; i++){
        int ele;
        cin>>ele;
        arr[i]=ele;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
        cout<<" ";
    }
    int x ;
    cout<<"Enter Element To search => \n";
    cin>>x;
	
	int n = size;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array \n"
		: cout << "Element is present at index \n " << result;
	return 0;
}
