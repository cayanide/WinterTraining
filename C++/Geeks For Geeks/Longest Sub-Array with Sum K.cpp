//{ Driver Code Starts
#include <iostream>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K)
    {
      std::unordered_map<int, int> cumulativeSumMap;
    int cumulativeSum = 0;
    int maxLength = 0;

    for (int i = 0; i < N; ++i) {
        cumulativeSum += A[i];

        if (cumulativeSum == K) {
            maxLength = i + 1;
        }

        if (cumulativeSumMap.find(cumulativeSum - K) != cumulativeSumMap.end()) {
            maxLength = std::max(maxLength, i - cumulativeSumMap[cumulativeSum - K]);
        }

        if (cumulativeSumMap.find(cumulativeSum) == cumulativeSumMap.end()) {
            cumulativeSumMap[cumulativeSum] = i;
        }
    }

    return maxLength;  // Complete the function
    }

};

//{ Driver Code Starts.

int main() {
	//code

	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];

	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;

	}

	return 0;
}
// } Driver Code Ends
