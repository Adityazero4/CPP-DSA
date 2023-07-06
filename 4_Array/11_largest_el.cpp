#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int largestElementIndex(int arr[], int n)
{
    int max = INT32_MIN;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxi = i;
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {10, 80, 555, 16};
    cout << largestElementIndex(arr, 4);
    return 0;
}