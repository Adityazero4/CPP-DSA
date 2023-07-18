#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxCircularSum(int arr[], int n)
{
    // Naive Approach:
    int res = arr[0];
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i];
        int maxSum = arr[i];
        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            sum += arr[index];
            maxSum = max(sum, maxSum);
        }
        res = max(res, maxSum);
    }
    return res;
}

// Optimized approach TC:O(n)
int normalMaxSum(int arr[], int n)
{
    int sum = 0;
    int res = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        res = max(res, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return res;
}
int normalMinSum(int arr[], int n)
{
    int sum = 0;
    int res = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        res = min(res, sum);
        if (sum > 0)
        {
            sum = 0;
        }
    }
    return res;
}
int circularSubarraySum(int arr[], int num)
{

    // your code here
    int maxNormal = normalMaxSum(arr, num);
    if (maxNormal < 0)
    {
        return maxNormal;
    }
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    int maxCircularSum = sum - normalMinSum(arr, num);
    return max(maxCircularSum, maxNormal);
}
int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxCircularSum(arr, n);
    cout << circularSubarraySum(arr, n);
    return 0;
}