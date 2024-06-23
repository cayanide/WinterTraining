//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
      
if (n <= 1) return 0; 
        
        int maxReach = arr[0]; 
        int steps = arr[0]; 
        int jumps = 1; 
        int lastJump = arr[0]; 
        
        for (int i = 1; i < n; i++) {
            if (i == n - 1) return jumps; 
            
            maxReach = max(maxReach, i + arr[i]); 
            
            steps--; 
            
            if (steps == 0) { 
                jumps++; 
                if (i >= maxReach) return -1; 
                if (arr[i] == 0) { 
                    for (int j = lastJump + 1; j <= maxReach; j++) { 
                        if (j >= n) break; 
                        if (i + arr[j] >= n - 1) return jumps + 1; 
                        if (arr[j] != 0) { 
                            maxReach = i + arr[j];
                            steps = maxReach - i;
                            lastJump = j;
                            break;
                        }
                    }
                } else { 
                    steps = maxReach - i;
                    lastJump = i;
                }
            }
        }
        
        return -1;   // Your code here
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends