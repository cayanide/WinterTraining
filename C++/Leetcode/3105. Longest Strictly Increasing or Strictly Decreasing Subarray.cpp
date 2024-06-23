class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
    int n = nums.size();
    if (n == 1)
    return 1;
    int maxLengthInc = 1,maxLengthDec = 1,currLengthInc = 1,currLengthDec = 1;

    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i-1]) {
            currLengthInc++;
            currLengthDec = 1;
        } else if (nums[i] < nums[i-1]) {
            currLengthDec++;
            currLengthInc = 1;
        } else {

            currLengthInc = 1;
            currLengthDec = 1;
        }
              maxLengthInc = max(maxLengthInc, currLengthInc);
        maxLengthDec = max(maxLengthDec, currLengthDec);


    }
    return max(maxLengthInc, maxLengthDec);
    }
};
