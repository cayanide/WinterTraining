
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findElementsAppearingMoreThanNBy3(vector<int>& nums) {
    int n = nums.size();
       int threshold = n / 3;


       unordered_map<int, int> elementCounts;

       for (int num : nums) {

           elementCounts[num]++;
       }

       vector<int> frequentElements;

       for (auto it = elementCounts.begin(); it != elementCounts.end(); ++it) {
           if (it->second > threshold) {
               frequentElements.push_back(it->first);
           }
       }

       return frequentElements;
}

int main() {
    vector<int> nums1 = {3, 2, 3};
    vector<int> nums2 = {1};
    vector<int> nums3 = {1, 2};

    vector<int> result1 = findElementsAppearingMoreThanNBy3(nums1);
    vector<int> result2 = findElementsAppearingMoreThanNBy3(nums2);
    vector<int> result3 = findElementsAppearingMoreThanNBy3(nums3);

    // Print the results
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
