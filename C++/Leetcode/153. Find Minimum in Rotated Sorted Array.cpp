class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
                int high = nums.size() - 1;

                while (low < high) {
                    int mid = low + (high - low) / 2;

                    if (nums[mid] < nums[high]) {

                        high = mid;
                    } else if (nums[mid] > nums[low]) {

                        low = mid + 1;
                    } else {

                        return min(nums[low], nums[high]);
                    }
                }


                return nums[low];

    }
};
