#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

bool canShipWithinDays(const std::vector<int>& weights, int days, int capacity) {
    int currentWeight = 0;
    int dayCount = 1;

    for (int weight : weights) {
        if (currentWeight + weight > capacity) {
            dayCount++;
            currentWeight = 0;
        }
        if (dayCount > days) {
            return false;
        }
        currentWeight += weight;
    }

    return true;
}

int shipWithinDays(std::vector<int>& weights, int days) {
    int left = *std::max_element(weights.begin(), weights.end());
    int right = std::accumulate(weights.begin(), weights.end(), 0);

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (canShipWithinDays(weights, days, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}

int main() {
    std::vector<int> weights1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days1 = 5;
    std::cout << "Example 1: " << shipWithinDays(weights1, days1) << std::endl; // Output: 15

    std::vector<int> weights2 = {3, 2, 2, 4, 1, 4};
    int days2 = 3;
    std::cout << "Example 2: " << shipWithinDays(weights2, days2) << std::endl; // Output: 6

    std::vector<int> weights3 = {1, 2, 3, 1, 1};
    int days3 = 4;
    std::cout << "Example 3: " << shipWithinDays(weights3, days3) << std::endl; // Output: 3

    return 0;
}
