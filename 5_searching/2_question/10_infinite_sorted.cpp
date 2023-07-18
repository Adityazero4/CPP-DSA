#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int searchInfinite(int arr[], int n, int x)
{
    if (arr[0] == x)
    {
        return 0;
    }
    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;
    }
    if (arr[i] == x)
    {
        return i;
    }
    return binarySearch(arr, n, x, i / 2 + 1, i - 1);
}
int main()
{
    int arr[];
    int n;
    int x;
    searchInfinite(arr, n, x);
    return 0;
}