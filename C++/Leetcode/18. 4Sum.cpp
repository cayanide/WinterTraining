class Solution {
public:
  vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<vector<int>> quadruplets;
    set<vector<int>> uniqueQuads;

    for (int i = 0; i < n - 3; i++) {
      if (i > 0 && nums[i] == nums[i - 1]) continue;

      for (int j = i + 1; j < n - 2; j++) {
        if (j > i + 1 && nums[j] == nums[j - 1]) continue;

        int remaining = target - nums[i] - nums[j];

        if (remaining == 0) {
          if (j < n - 1 && (nums[j + 1] == 0 || nums[j + 1] == remaining)) {
            vector<int> quad = {nums[i], nums[j], nums[j + 1], nums[j + 2]};
            if (uniqueQuads.insert(quad).second) {
              quadruplets.push_back(quad);
            }
          }
        } else {
          pair<int, int> indices = twoSumPositive(nums, remaining, j + 1);
          if (indices.first != -1 && indices.second != -1) {
            vector<int> quad = {nums[i], nums[j], nums[indices.first], nums[indices.second]};
            if (uniqueQuads.insert(quad).second) {
              quadruplets.push_back(quad);
            }
          }
        }
      }
    }

    return quadruplets;
  }

private:
  pair<int, int> twoSumPositive(const vector<int>& nums, int target, int left) {
    int right = nums.size() - 1;
    while (left < right) {
      int sum = nums[left] + nums[right];
      if (sum == target) {
        return {left, right};
      } else if (sum < target || (nums[left] == 0 && target == nums[right])) {
        left++;
      } else {
        right--;
      }
    }
    return {-1, -1};
  }
};
