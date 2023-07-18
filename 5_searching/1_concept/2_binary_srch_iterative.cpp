#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[], int n, int x)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (e >= s)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else if (arr[mid] < x)
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int BinarySearch2(int arr[], int n, int x)
{
    int s = 0;
    int e = n - 1;
    while (e >= s)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 15, 20, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << BinarySearch(arr, n, 60);
    cout << BinarySearch2(arr, n, 60);

    return 0;
}