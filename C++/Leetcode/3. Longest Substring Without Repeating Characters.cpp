#include <string>
#include <unordered_map>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        std::unordered_map<char, int> char_map;
        int max_length = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            char current_char = s[right];

            if (char_map.find(current_char) != char_map.end() && char_map[current_char] >= left) {
                left = char_map[current_char] + 1;
            }

            char_map[current_char] = right;
            max_length = std::max(max_length, right - left + 1);
        }

        return max_length;
    }
};
