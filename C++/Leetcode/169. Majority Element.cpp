#include <iostream>
#include <vector>
using namespace std;

int majorityElement(std::vector<int>& nums) {
    int candidate = 0;
    int count = 0;

    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    return candidate;
}

int main() {
    std::vector<int> nums1 = {3, 2, 3};
    std::cout << "The majority element is: " << majorityElement(nums1) << std::endl;  // Output: 3

    std::vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    std::cout << "The majority element is: " << majorityElement(nums2) << std::endl;  // Output: 2

    return 0;
}
