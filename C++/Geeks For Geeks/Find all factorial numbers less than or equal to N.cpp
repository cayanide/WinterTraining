//{ Driver Code Starts
#include<iostream>
using namespace std;
#include <vector>
// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {

        std::vector<unsigned long long> result;

           unsigned long long fact = 1;
           int i = 1;

           while (fact <= N) {
               result.push_back(fact);
               i++;
               if (fact > N / i) {
                   // To avoid overflow in the next multiplication
                   break;
               }
               fact *= i;
           }

           return result;
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;

    }
    return 0;
}
// } Driver Code Ends
