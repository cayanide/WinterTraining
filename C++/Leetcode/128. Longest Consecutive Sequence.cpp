#include <vector>
#include <unordered_set>

class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        std::unordered_set<int> num_set(nums.begin(), nums.end());
        int max_length = 0;

        for (int num : nums) {
            if (!num_set.count(num - 1)) { // num is the start of a new sequence
                int current_num = num;
                int current_length = 1;

                while (num_set.count(current_num + 1)) {
                    current_num++;
                    current_length++;
                }

                max_length = std::max(max_length, current_length);
            }
        }

        return max_length;
    }
};
