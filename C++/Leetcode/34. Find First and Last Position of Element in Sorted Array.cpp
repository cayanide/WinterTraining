class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int size = nums.size();
                vector<int> ans = {-1, -1};


                if (size == 0) {
                    return ans;
                }


                int low = 0, high = size - 1;
                while (low <= high) {
                    int mid = low + (high - low) / 2;

                    if (nums[mid] == target) {

                        int left = mid;
                        while (left >= 0 && nums[left] == target) {
                            left--;
                        }
                        ans[0] = left + 1;


                        int right = mid;
                        while (right < size && nums[right] == target) {
                            right++;
                        }
                        ans[1] = right - 1;

                        return ans;
                    } else if (nums[mid] < target) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }


                return ans;
    }
};
