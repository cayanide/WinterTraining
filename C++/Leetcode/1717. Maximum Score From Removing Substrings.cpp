#include <string>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int score = 0;
        int i = 0, j = 0;
        int n = s.length();


        if (x >= y) {
            while (j < n) {
                s[i++] = s[j++];
                if (i >= 2 && s[i-2] == 'a' && s[i-1] == 'b') {
                    score += x;
                    i -= 2;
                }
            }
        }

        else {
            while (j < n) {
                s[i++] = s[j++];
                if (i >= 2 && s[i-2] == 'b' && s[i-1] == 'a') {
                    score += y;
                    i -= 2;
                }
            }
        }


        int k = 0;
        for (int idx = 0; idx < i; ++idx) {
            if (k >= 2 && s[k-1] == 'a' && s[k-2] == 'b' && s[idx] == 'b') {
                score += x;
                k -= 2;
            } else {
                s[k++] = s[idx];
            }
        }

        return score;
    }
};
