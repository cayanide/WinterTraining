//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends


class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
       if (N < 2) {
        return 0; // Since N >= 2 is guaranteed, this is just a safety check
    }

    long long max_sum = LLONG_MIN;
    long long first_min = LLONG_MAX;
    long long second_min = LLONG_MAX;

    for (int i = 0; i < N; ++i) {
        if (arr[i] <= first_min) {
            second_min = first_min;
            first_min = arr[i];
        } else if (arr[i] < second_min) {
            second_min = arr[i];
        }

        if (second_min != LLONG_MAX) {
            long long current_sum = first_min + second_min;
            if (current_sum > max_sum) {
                max_sum = current_sum;
            }
        }
    }

    return max_sum;
        // Your code goes here
    }
};



//{ Driver Code Starts.
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
	    for(ll i=0;i<n;i++)
		    cin>>a[i];
		Solution ob;
	    cout<<ob.pairWithMaxSum(a,n)<<endl;
	}
	return 0;
}


// } Driver Code Ends
