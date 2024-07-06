//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	if (m == 0) return 0;
        if (n == 1) return m;

        int low = 1, high = m;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long int power = 1;
            bool overflow = false;


            for (int i = 0; i < n; ++i) {
                power *= mid;
                if (power > m) {
                    overflow = true;
                    break;
                }
            }

            if (power == m) {
                return mid;
            } else if (power > m || overflow) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return -1;


 	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
