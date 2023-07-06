#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int insert(int arr[], int n, int e, int pos, int cap)
{
    if (n == cap)
    {
        return n;
    }
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = e;

    return n + 1;
}
int main()
{
    int arr[5] = {1, 2, 3};
    int e, pos;
    cin >> e >> pos;
    int cap = 5;
    int n = insert(arr, 3, e, pos, cap);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}