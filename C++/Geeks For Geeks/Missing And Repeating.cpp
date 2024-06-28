//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int xor1 = 0;

          for (int i = 0; i < n; i++) {
            xor1 ^= arr[i];
          }

          for (int i = 1; i <= n; i++) {
            xor1 ^= i;
          }




          int rightmostSetBit = xor1 & ~(xor1 - 1);


          int x = 0, y = 0;
          for (int i = 0; i < n; i++) {
            if (arr[i] & rightmostSetBit) {
              x ^= arr[i];
            } else {
              y ^= arr[i];
            }
            if ((i + 1) & rightmostSetBit) {
              x ^= (i + 1);
            } else {
              y ^= (i + 1);
            }
          }



          for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
              return {x, y};
            }
          }

          return {y, x};
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends
