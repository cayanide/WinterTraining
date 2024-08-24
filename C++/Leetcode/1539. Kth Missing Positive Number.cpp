#include <iostream>
#include <vector>

int findKthPositive(std::vector<int>& arr, int k) {
    int left = 0, right = arr.size() - 1;


    while (left <= right) {
        int mid = left + (right - left) / 2;
        int missing = arr[mid] - (mid + 1);

        if (missing < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }


    return left + k;
}

int main() {
    std::vector<int> arr1 = {2, 3, 4, 7, 11};
    int k1 = 5;
    std::cout << "Example 1: " << findKthPositive(arr1, k1) << std::endl; // Output: 9

    std::vector<int> arr2 = {1, 2, 3, 4};
    int k2 = 2;
    std::cout << "Example 2: " << findKthPositive(arr2, k2) << std::endl; // Output: 6

    return 0;
}
