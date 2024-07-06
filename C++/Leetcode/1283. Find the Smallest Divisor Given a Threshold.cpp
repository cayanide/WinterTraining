#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (computeSum(nums, mid) <= threshold) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

private:
    int computeSum(const vector<int>& nums, int divisor) {
        int total = 0;
        for (int num : nums) {
            total += (num + divisor - 1) / divisor; // This ensures rounding up
        }
        return total;
    }
};

int main() {
    Solution sol;
    vector<int> nums1 = {1, 2, 5, 9};
    int threshold1 = 6;
    cout << sol.smallestDivisor(nums1, threshold1) << endl; // Output: 5

    vector<int> nums2 = {44, 22, 33, 11, 1};
    int threshold2 = 5;
    cout << sol.smallestDivisor(nums2, threshold2) << endl; // Output: 44

    return 0;
}
