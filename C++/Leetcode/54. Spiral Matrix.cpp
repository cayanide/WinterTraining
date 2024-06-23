#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return {};

        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;

        while (top <= bottom && left <= right) {

            for (int j = left; j <= right; ++j) {
                result.push_back(matrix[top][j]);
            }
            ++top;


            for (int i = top; i <= bottom; ++i) {
                result.push_back(matrix[i][right]);
            }
            --right;


            if (top <= bottom) {
                for (int j = right; j >= left; --j) {
                    result.push_back(matrix[bottom][j]);
                }
                --bottom;
            }


            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                ++left;
            }
        }

        return result;
    }
};

// Example usage:
int main() {
    Solution sol;
    vector<vector<int>> matrix1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> result1 = sol.spiralOrder(matrix1);
    for (int val : result1) {
        cout << val << " ";
    }
    cout << endl;

    vector<vector<int>> matrix2 = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    vector<int> result2 = sol.spiralOrder(matrix2);
    for (int val : result2) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
