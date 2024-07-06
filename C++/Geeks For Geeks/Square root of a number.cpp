//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x)
    {
        if (x == 0) return 0;
  if (x <= 3) return 1;


  int low = 1, high = x / 2;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    int square = mid * mid;


    if (square == x) {
      return mid;
    } else if (square < x) {

      low = mid + 1;
    } else {

      high = mid - 1;
    }
  }


  return high;
        // Your code goes here
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;
}

// } Driver Code Ends
