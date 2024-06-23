#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end()); // Sort the array for efficient lookups

    vector<vector<int>> triplets;
    unordered_set<int> seen;

    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; // Skip duplicates of the first element

        int target = -nums[i]; // Target sum for the remaining two elements

        // Use two pointers (j and k) to search for the remaining elements
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = nums[j] + nums[k];
            if (sum == target) {
                triplets.push_back({nums[i], nums[j], nums[k]});
                ++j; // Move j to avoid duplicates (seen[j] is not used here)
                while (j < k && nums[j] == nums[j - 1]) ++j; // Skip duplicates of the second element
            } else if (sum < target) {
                ++j;
            } else {
                --k;
            }
        }
    }

    return triplets;
}
