#include <bits/stdc++.h>
using namespace std;

vector<int> mergeKSortedArrays(vector<vector<int>>& kArrays, int k) {

    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> minHeap;


    vector<int> result;


    for (int i = 0; i < k; i++) {
        if (!kArrays[i].empty()) {
            minHeap.push({kArrays[i][0], {i, 0}});
        }
    }


    while (!minHeap.empty()) {
        auto current = minHeap.top();
        minHeap.pop();

        int value = current.first;
        int arrayIndex = current.second.first;
        int elementIndex = current.second.second;


        result.push_back(value);


        if (elementIndex + 1 < kArrays[arrayIndex].size()) {
            minHeap.push({kArrays[arrayIndex][elementIndex + 1], {arrayIndex, elementIndex + 1}});
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int K;
        cin >> K;
        vector<vector<int>> kArrays(K);

        for (int i = 0; i < K; i++) {
            int N;
            cin >> N;
            kArrays[i] = vector<int>(N);
            for (int j = 0; j < N; j++) {
                cin >> kArrays[i][j];
            }
        }

        vector<int> result = mergeKSortedArrays(kArrays, K);

        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
