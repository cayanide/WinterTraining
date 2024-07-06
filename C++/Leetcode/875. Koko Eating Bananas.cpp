class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
              int high = *max_element(piles.begin(), piles.end());

              while (low < high) {
                  int mid = low + (high - low) / 2;
                  if (canEatAll(piles, h, mid)) {
                      high = mid;
                  } else {
                      low = mid + 1;
                  }
              }

              return low;
    }
    private:
        bool canEatAll(const vector<int>& piles, int h, int k) {
            int hours = 0;
            for (int pile : piles) {
                hours += (pile + k - 1) / k;
                if (hours > h) return false;
            }
            return true;
        }
};
