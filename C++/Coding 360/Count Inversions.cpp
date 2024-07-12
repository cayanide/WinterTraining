#include <bits/stdc++.h>
using namespace std;

long long mergeAndCount(long long *arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;


    vector<long long> leftArr(n1);
    vector<long long> rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = left;
    long long invCount = 0;


    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
            invCount += (n1 - i);
        }
    }


    while (i < n1)
        arr[k++] = leftArr[i++];


    while (j < n2)
        arr[k++] = rightArr[j++];

    return invCount;
}

long long mergeSortAndCount(long long *arr, int left, int right) {
    long long invCount = 0;
    if (left < right) {
        int mid = left + (right - left) / 2;

        invCount += mergeSortAndCount(arr, left, mid);
        invCount += mergeSortAndCount(arr, mid + 1, right);
        invCount += mergeAndCount(arr, left, mid, right);
    }
    return invCount;
}

long long getInversions(long long *arr, int n){
    return mergeSortAndCount(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << getInversions(arr, n) << endl;
    return 0;
}
