class Solution {
public:
    bool isPalindrome(string s) {
            string filteredStr = "";


    for (char c : s) {
        if (isalnum(c)) {
            filteredStr += tolower(c);
        }
    }


    int left = 0;
    int right = filteredStr.size() - 1;

    while (left < right) {
        if (filteredStr[left] != filteredStr[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;

    }
};
