#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int ternarySearch(int arr[], int n, int x)
{
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int mid1 = l + (h - l) / 3;
        int mid2 = h - (h - l) / 3;
        if (arr[mid1] == x)
        {
            return mid1;
        }
        else if (arr[mid2] == x)
        {
            return mid2;
        }
        else if (x < arr[mid1])
        {
            h = mid1 - 1;
        }
        else if (x > arr[mid2])
        {
            l = mid2 + 1;
        }
        else if (x > arr[mid1] && x < arr[mid2])
        {
            l = mid1 + 1;
            h = mid2 - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int x = 6;
    cout << ternarySearch(arr, n, x);
    return 0;
}