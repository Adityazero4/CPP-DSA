#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maxConsOnes(int arr[], int n)
{
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt = 0;
        }
        else
        {
            cnt++;
            ans = max(ans, cnt);
        }
    }
    return ans;
}
int main()
{
    int arr[] = {0, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxConsOnes(arr, n);
    return 0;
}