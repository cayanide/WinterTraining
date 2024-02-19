#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void oddElement(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << i << " ";
            count++;
        }
    }
    if (count == 0)
    {
        count = -1;
        cout << count;
    }
}
void arrayMerge(int arr1[], int arr2[], int n, int m)
{
    int arr[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n)
    {
        arr[i] = arr1[i];
        // cout<<arr[i]<<" ";
        i++;
    }
    k = i;
    while (j < m)
    {
        arr[k] = arr2[j];
        // cout<<arr[k]<<" ";
        k++;
        j++;
    }

    display(arr, n + m);
    oddElement(arr, n + m);
}
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    input(arr1, n);

    int m;
    cin >> m;
    int arr2[m];
    input(arr2, m);

    arrayMerge(arr1, arr2, n, m);

    return 0;
}