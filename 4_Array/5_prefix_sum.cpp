#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fillPrefixSum(int arr[], int n, int prefixSum[])
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            prefixSum[i] = arr[i];
        }
        else
        {
            prefixSum[i] = prefixSum[i - 1] + arr[i];
        }
    }
}
int main()
{
    int arr[] = {10, 20, 10, 5, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefixSum[n];
    fillPrefixSum(arr, n, prefixSum);
    for (int i : prefixSum)
    {
        cout << i << " ";
    }
    return 0;
}