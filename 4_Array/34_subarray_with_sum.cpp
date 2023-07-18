#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool subarrayContainSum(int arr[], int n, int k)
{
    int l = 0;
    int r = 0;
    int sum = 0;
    while (r < n)
    {
        sum += arr[r];
        while (sum > k)
        {
            sum -= arr[l];
            l++;
        }
        if (sum == k)
        {
            return true;
        }
        r++;
    }
    return false;
}
int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 33;
    cout << subarrayContainSum(arr, n, k);
    return 0;
}