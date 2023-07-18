#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int MaxDiffOrder(int arr[], int n)
{
    // Naive Approach->O(n^2)
    //  int max = INT_MIN;
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = i + 1; j < n; j++)
    //      {
    //          if ((arr[j] - arr[i]) > max)
    //          {
    //              max = arr[j] - arr[i];
    //          }
    //      }
    //  }
    //  return max;

    int res = arr[1] - arr[0];
    int minVal = arr[0];
    for (int j = 1; j < n; j++)
    {
        res = max(res, arr[j] - minVal);
        minVal = min(arr[j], minVal);
    }
    return res;
}
int main()
{
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    cout << MaxDiffOrder(arr, 7);
    return 0;
}