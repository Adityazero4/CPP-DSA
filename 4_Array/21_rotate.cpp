#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Leftrotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[(i + 1) % n];
    }
    arr[n - 1] = temp;
}
void rotate(int arr[], int n, int d)
{
    // for (int i = 0; i < d; i++)
    // {
    //     Leftrotate(arr, n);
    // }
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }
    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[i + d];
    }
    for (int i = 0; i < temp.size(); i++)
    {
        arr[n - d + i] = temp[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate(arr, 9, 3);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}