class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (x < v[0]) return -1;

               long long left = 0, right = n - 1;
               long long floorIndex = -1;

               while (left <= right) {
                   long long mid = left + (right - left) / 2;

                   if (v[mid] == x) {
                       return mid;
                   } else if (v[mid] < x) {
                       floorIndex = mid; // Update potential candidate for floor
                       left = mid + 1;
                   } else {
                       right = mid - 1;
                   }
               }

               return floorIndex;
    }
};
