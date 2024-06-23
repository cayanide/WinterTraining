#include <iostream>
#include <vector>

// Function to generate Pascal's Triangle
std::vector<std::vector<int>> generate(int numRows) {
    std::vector<std::vector<int>> pascalTriangle(numRows);

    for (int i = 0; i < numRows; ++i) {
        pascalTriangle[i].resize(i + 1); // Resize each row
        pascalTriangle[i][0] = pascalTriangle[i][i] = 1; // The first and last element in each row is 1

        // Fill in the interior values
        for (int j = 1; j < i; ++j) {
            pascalTriangle[i][j] = pascalTriangle[i - 1][j - 1] + pascalTriangle[i - 1][j];
        }
    }

    return pascalTriangle;
}

// Function to print Pascal's Triangle
void printPascalsTriangle(const std::vector<std::vector<int>>& pascalTriangle) {
    for (const auto& row : pascalTriangle) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numRows;
    std::cout << "Enter the number of rows: ";
    std::cin >> numRows;

    std::vector<std::vector<int>> result = generate(numRows);
    printPascalsTriangle(result);

    return 0;
}
