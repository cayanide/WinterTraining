//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  long long merge(long long arr[], long long temp[], int left, int mid, int right) {
      long long inv_count = 0;
        int i = left;
        int j = mid;
        int k = left;

        while ((i <= mid - 1) && (j <= right)) {
          if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
          } else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
          }
        }


        while (i <= mid - 1) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];

                for (i = left; i <= right; i++) arr[i] = temp[i];

        return inv_count;
  }
    // arr[]: Input Array
    // n : Size of the Array arr[]
    // Function to count inversions in the array.
    //
    long long merge_Sort(long long arr[], long long temp[], int left, int right) {
      int mid;
      long long inv_count = 0;
      if (right > left) {
        mid = (left + right) / 2;


        inv_count += merge_Sort(arr, temp, left, mid);
        inv_count += merge_Sort(arr, temp, mid + 1, right);


        inv_count += merge(arr, temp, left, mid + 1, right);
      }

      return inv_count;
    }

    long long int inversionCount(long long arr[], int n) {
        long long temp[n];
          int left = 0;
          int right = n - 1;


          long long inv_count = merge_Sort(arr, temp, left, right);

          return inv_count;

        // Your Code Here
    }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        long long A[n];
        for (long long i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, n) << endl;
    }

    return 0;
}

// } Driver Code Ends
