#include <iostream>
#include <vector>

using namespace std;

int climbStairs(int n) {

    if(n==1)
    return 1;
    if(n==2)
    return 2;
   vector<int> dp(n+1);
          if(n>=3){

              dp[1]=1;
              dp[2]=2;

          for(int i=3;i<=n;++i){
              dp[i]=dp[i-1]+dp[i-2];

          }
          }
          return dp[n];
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    cout << "Number of ways to climb to the top: " << climbStairs(n) << endl;

    return 0;
}
