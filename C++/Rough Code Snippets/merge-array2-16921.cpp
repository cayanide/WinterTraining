#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 0 || n > 20)
    {
        cout<<"Invalid Array";
        exit(0);
    }

    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        if (i > 0)
        {
            if (arr1[i] > arr1[i - 1])
            {
                cout << "Incorrect Array Elements";
                exit(0);
            }
        }
    }
    // for (auto x : arr1)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    int m;
    cin >> m;
    if (m <= 0 || m > 20)
    {
        cout<<"Invalid Array";
        exit(0);
    }
    if(n == m)
    {
        cout<<"Invalid Array";
        exit(0);
    }
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
        if (i > 0)
        {
            if (arr2[i] > arr2[i - 1])
            {
                cout << "Incorrect Array Elements";
                exit(0);
            }
        }
    }
    // for (auto x : arr2)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;

    int arr[m + n];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
    for (auto x : arr)
    {
        cout << x <<endl;
    }
}