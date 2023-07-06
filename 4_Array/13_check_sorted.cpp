#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = {1, 1};
    cout << isSorted(arr, 4);
    return 0;
}