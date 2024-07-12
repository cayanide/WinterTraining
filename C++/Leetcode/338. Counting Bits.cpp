#include <vector>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> ans(n + 1);
        for (int i = 0; i <= n; ++i) {
            ans[i] = ans[i >> 1] + (i & 1);
        }
        return ans;
    }
};
