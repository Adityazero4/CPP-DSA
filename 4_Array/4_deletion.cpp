#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int deleteElement(int arr[], int n, int del)
{
    int idx;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == del)
        {
            idx = i;
            break;
        }
    }
    if (idx == n)
    {
        return n;
    }
    for (int i = idx; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    return n - 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int del;
    cin >> del;
    n = deleteElement(arr, n, del);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}