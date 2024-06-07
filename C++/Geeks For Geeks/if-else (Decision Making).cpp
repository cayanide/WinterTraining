//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string compareNM(int n, int m){
        
        string str;
        if(n<m){
        str="lesser";
        return str;
        }
        else if (n==m){
            str="equal";
            return str;
            
        }
        else if(n>m){
            str = "greater";
            return str;
        }
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m ; cin>>n>>m;
        Solution obj;
        cout<<obj.compareNM(n,m)<<"\n";
    }
    return 0;
}
// } Driver Code Ends