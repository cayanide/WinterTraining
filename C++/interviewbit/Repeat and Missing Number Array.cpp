#include <vector>
#include <cmath>

std::vector<int> repeatedNumber(const std::vector<int> &A) {
    long long n = A.size();


        long long expected_sum = (n * (n + 1)) / 2;
        long long expected_sum_squares = (n * (n + 1) * (2 * n + 1)) / 6;


        long long actual_sum = 0;
        long long actual_sum_squares = 0;

        for (long long num : A) {
            actual_sum += num;
            actual_sum_squares += num * num;
        }


        long long sum_diff = expected_sum - actual_sum;
        long long square_sum_diff = expected_sum_squares - actual_sum_squares;


        long long sum_plus_diff = square_sum_diff / sum_diff;


        long long duplicate = (sum_plus_diff - sum_diff) / 2;
        long long missing = (sum_plus_diff + sum_diff) / 2;

        return {static_cast<int>(duplicate), static_cast<int>(missing)};
}
