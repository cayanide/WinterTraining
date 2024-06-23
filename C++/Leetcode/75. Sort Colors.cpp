#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
           swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else if (nums[mid] == 2) {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums1 = {2, 0, 2, 1, 1, 0};
    sortColors(nums1);
   cout << "Sorted array: ";
    for (int num : nums1) {
       cout << num << " ";
    }
   cout << std::endl;

    vector<int> nums2 = {2, 0, 1};
    sortColors(nums2);
    cout << "Sorted array: ";
    for (int num : nums2) {
      cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
