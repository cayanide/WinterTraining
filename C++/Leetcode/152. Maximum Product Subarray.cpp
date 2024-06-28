class Solution {
public:
    int maxProduct(vector<int>& nums) {

        if (nums.empty()) return 0;

                __int128 ans = nums[0];
                __int128 maxProduct = ans;
                __int128 minProduct = ans;

                for (int i = 1; i < nums.size(); ++i) {
                    if (nums[i] < 0) {
                        swap(maxProduct, minProduct);
                    }
                    maxProduct = max(static_cast<__int128>(nums[i]), maxProduct * nums[i]);
                    minProduct = min(static_cast<__int128>(nums[i]), minProduct * nums[i]);
                    ans = max(ans, maxProduct);
                }

                return static_cast<int>(ans);
    }
};
