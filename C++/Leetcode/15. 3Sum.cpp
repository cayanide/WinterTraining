#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<vector<int>> triplets;
    unordered_set<int> seen;

    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int target = -nums[i];

        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = nums[j] + nums[k];
            if (sum == target) {
                triplets.push_back({nums[i], nums[j], nums[k]});
                ++j;
                while (j < k && nums[j] == nums[j - 1]) ++j;
            } else if (sum < target) {
                ++j;
            } else {
                --k;
            }
        }
    }

    return triplets;
}
