#include <vector>

using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives;
        vector<int> negatives;


        for (int num : nums) {
            if (num > 0) {
                positives.push_back(num);
            } else {
                negatives.push_back(num);
            }
        }

        vector<int> result;
        for (int i = 0; i < positives.size(); ++i) {
            result.push_back(positives[i]);
            result.push_back(negatives[i]);
        }

        return result;
    }
};

// Example usage
int main() {
    Solution solution;

    vector<int> nums1 = {3, 1, -2, -5, 2, -4};
    vector<int> result1 = solution.rearrangeArray(nums1);
    // Expected output: [3, -2, 1, -5, 2, -4]

    vector<int> nums2 = {-1, 1};
    vector<int> result2 = solution.rearrangeArray(nums2);
    // Expected output: [1, -1]

    return 0;
}
