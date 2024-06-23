#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sumCount;
        int currentSum = 0;
        int count = 0;


        sumCount[0] = 1;

        for (int num : nums) {
            currentSum += num;

              if (sumCount.find(currentSum - k) != sumCount.end()) {
                count += sumCount[currentSum - k];
            }

             sumCount[currentSum]++;
        }

        return count;
    }
};

// Example usage:
int main() {
    Solution sol;
    vector<int> nums1 = {1, 1, 1};
    int k1 = 2;
    int result1 = sol.subarraySum(nums1, k1);
    cout << "Result 1: " << result1 << endl; // Output: 2

    vector<int> nums2 = {1, 2, 3};
    int k2 = 3;
    int result2 = sol.subarraySum(nums2, k2);
    cout << "Result 2: " << result2 << endl; // Output: 2

    return 0;
}
