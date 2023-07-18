#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int recursive(int arr[], int n, int low, int high, int x)
{
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        recursive(arr, n, low, mid - 1, x);
    }
    else
    {
        recursive(arr, n, mid + 1, high, x);
    }
}
int main()
{
    int arr[] = {10, 15, 20, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << recursive(arr, n, 0, n - 1, 60);

    return 0;
}