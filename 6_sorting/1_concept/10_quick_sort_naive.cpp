#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void NaivePartition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], ind = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[p])
        {
            temp[ind] = arr[i];
            ind++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            temp[ind] = arr[i];
            ind++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}
int main()
{
    int arr[] = {5, 13, 6, 9, 12, 8};
    int l = 0;
    int h = 5;
    int p = 5;
    NaivePartition(arr, l, h, p);
    cout << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}