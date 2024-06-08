//{ Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;
#include<vector>


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
         a++;

        b += 2;

        
        return {a, b};
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        Solution obj;
        vector<int> ans = obj.passedBy(a, b);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}

// } Driver Code Ends