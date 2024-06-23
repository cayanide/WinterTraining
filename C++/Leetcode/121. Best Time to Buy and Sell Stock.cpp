#include <vector>
#include <iostream>
#include <algorithm> // for std::max and std::min

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            // Calculate the current profit
            int currentProfit = prices[i] - minPrice;

            // Update the maximum profit
            maxProfit = max(maxProfit, currentProfit);

            // Update the minimum price
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};

// Example usage
int main() {
    Solution solution;

    vector<int> prices1 = {7, 1, 5, 3, 6, 4};
    vector<int> prices2 = {7, 6, 4, 3, 1};

    int result1 = solution.maxProfit(prices1); // Should return 5
    int result2 = solution.maxProfit(prices2); // Should return 0

    return 0;
}
