#include <iostream>
using namespace std;
#include <vector>
#include <limits>

// } Driver Code Ends
class Solution {
public:
  vector<long long> lcmAndGcd(long long A, long long B) {
   
   if (A == 0 || B == 0) {
      return {max(A, B), min(A, B)};
    }

    int AA=A;
    int BB=B;
    while (BB != 0) {
      long long remainder = AA % BB ;

      AA = BB;
      BB = remainder;
    }

    
    long long gcd = AA;

    
    long long lcm = (A * B) / gcd;

    return {lcm, gcd};
  }
};

// { Driver Code Starts.
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long A, B;

    cin >> A >> B;

    Solution ob;
    vector<long long> ans = ob.lcmAndGcd(A, B);
    cout << ans[0] << " " << ans[1] << endl;
  }
  return 0;
}
// } Driver Code Ends
