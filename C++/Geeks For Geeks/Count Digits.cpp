//{ Driver Code Starts
#include<iostream> 
using namespace std;
#include<vector>

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
       int count = 0;
  int digit;

  
  while (N > 0) {
    digit = N % 10; 

  
    if (digit != 0 && N % digit == 0) {
      count++; 
    }

  
    N /= 10;
  }

  return count;

        }

        //code here
    
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends