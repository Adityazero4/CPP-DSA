#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int find2ndLargest(int arr[], int n)
{
    int largest = 0;
    int res = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {20, 10, 20, 16, 12};
    cout << find2ndLargest(arr, 5);
    return 0;
}