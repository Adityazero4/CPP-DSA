#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main()
{
    int arr[] = {2, 10, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}