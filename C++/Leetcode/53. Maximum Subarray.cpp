#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(const std::vector<int>& nums) {
    if (nums.empty()) return 0;

       int current_sum = nums[0];
       int max_sum = nums[0];

       for (size_t i = 1; i < nums.size(); ++i) {
           current_sum = max(nums[i], current_sum + nums[i]);
           max_sum = max(max_sum, current_sum);
       }

       return max_sum ;
}

int main() {
    std::vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "The maximum subarray sum is: " << maxSubArray(nums1) << std::endl;  // Output: 6

    std::vector<int> nums2 = {1};
    std::cout << "The maximum subarray sum is: " << maxSubArray(nums2) << std::endl;  // Output: 1

    std::vector<int> nums3 = {5, 4, -1, 7, 8};
    std::cout << "The maximum subarray sum is: " << maxSubArray(nums3) << std::endl;  // Output: 23

    return 0;
}
