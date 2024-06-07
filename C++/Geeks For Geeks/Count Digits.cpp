//{ Driver Code Starts
#include<iostream> 
using namespace std;
#include<vector>

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int temp=N;
        int digit;
        vector<int> ans;
            while(temp>0){
                digit=temp%10;
                if(N%digit==0){
                    ans.push_back(digit);
                }
                temp=temp%10;

                

            }
            for(auto elem : ans){
                cout<<elem<<" ";
            }
            return 0;


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