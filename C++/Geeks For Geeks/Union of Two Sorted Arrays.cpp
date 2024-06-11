//{ Driver Code Starts
#include <iostream>
using namespace std;
#include<vector>



// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {

    std::vector<int> unionList;

    int i = 0, j = 0;
    int prev = INT_MIN;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (arr1[i] != prev) {
                unionList.push_back(arr1[i]);
                prev = arr1[i];
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (arr2[j] != prev) {
                unionList.push_back(arr2[j]);
                prev = arr2[j];
            }
            j++;
        } else {
            if (arr1[i] != prev) {
                unionList.push_back(arr1[i]);
                prev = arr1[i];
            }
            i++;
            j++;
        }
    }


    while (i < n) {
        if (arr1[i] != prev) {
            unionList.push_back(arr1[i]);
            prev = arr1[i];
        }
        i++;
    }


    while (j < m) {
        if (arr2[j] != prev) {
            unionList.push_back(arr2[j]);
            prev = arr2[j];
        }
        j++;
    }

    return unionList;

    }
};

//{ Driver Code Starts.

int main() {

	int T;
	cin >> T;

	while(T--){



	    int N, M;
	    cin >>N >> M;

	    int arr1[N];
	    int arr2[M];

	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }

	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;

	}

	return 0;
}
// } Driver Code Ends
