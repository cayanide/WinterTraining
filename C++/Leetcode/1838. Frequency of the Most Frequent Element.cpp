#include <iostream>
#include <vector>
#include <algorithm>

int maxFrequency(std::vector<int>& nums, int k) {

    std::sort(nums.begin(), nums.end());

        int left = 0;
        long long totalOperations = 0;
        int maxFreq = 0;

        for (int right = 0; right < nums.size(); ++right) {

            totalOperations += nums[right];


            while (totalOperations + k < static_cast<long long>(nums[right]) * (right - left + 1)) {
                totalOperations -= nums[left];
                left++;
            }


            maxFreq = std::max(maxFreq, right - left + 1);
        }

        return maxFreq;
}

int main() {
    std::vector<int> nums1 = {1, 2, 4};
    int k1 = 5;
    std::cout << "Example 1: " << maxFrequency(nums1, k1) << std::endl; // Output: 3

    std::vector<int> nums2 = {1, 4, 8, 13};
    int k2 = 5;
    std::cout << "Example 2: " << maxFrequency(nums2, k2) << std::endl; // Output: 2

    std::vector<int> nums3 = {3, 9, 6};
    int k3 = 2;
    std::cout << "Example 3: " << maxFrequency(nums3, k3) << std::endl; // Output: 1

    return 0;
}
