//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {
        int current_sum = 0;
  unordered_map<int, int> seen;
  int max_length = 0;

  for (int i = 0; i < n; i++) {
    current_sum += A[i];

    if (current_sum == 0) {
      max_length = i + 1;
    } else {
      if (seen.count(current_sum)) {
        max_length = max(max_length, i - seen[current_sum]);
      } else {
        seen[current_sum] = i;
      }
    }
  }

  return max_length;

        // Your code here
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0;
}



// } Driver Code Ends
