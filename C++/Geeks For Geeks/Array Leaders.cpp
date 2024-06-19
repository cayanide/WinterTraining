//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends


class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {

         vector<int> leaders_list;
        int max_from_right = arr[n-1];


        leaders_list.push_back(max_from_right);


        for (int i = n-2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                max_from_right = arr[i];
                leaders_list.push_back(max_from_right);
            }
        }

          reverse(leaders_list.begin(), leaders_list.end());
        return leaders_list;

        // Code here
    }
};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends
