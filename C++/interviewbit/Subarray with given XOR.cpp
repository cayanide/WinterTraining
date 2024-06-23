#include <iostream>


using namespace std;

#include <unordered_map>

int solve(int* A, int n, int B) {
    int n = A.size();
      int count = 0;

      unordered_map<int, int> prefixXorCount;

      prefixXorCount[0] = 1;

      int prefixXor = 0;
      for (int i = 0; i < n; ++i) {
        prefixXor ^= A[i];

        int targetXor = prefixXor ^ B;

        if (prefixXorCount.count(targetXor) > 0) {
          count += prefixXorCount[targetXor];
        }

        prefixXorCount[prefixXor]++;
      }

      return count;
}

int main() {
  vector<int> A = {4, 2, 2, 6, 4};
  int B = 6;

  int count = countSubarraysWithXor(A, B);

  cout << "Number of subarrays with XOR " << B << ": " << count << endl;

  return 0;
}
