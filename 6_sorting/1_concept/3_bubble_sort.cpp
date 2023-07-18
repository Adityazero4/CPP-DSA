#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// TC:O(n^2) AS:O(1) and Stable sorting algorithm
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // passes
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) // j<n-1 becuase we are using j+1 for comparison
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {2, 10, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}