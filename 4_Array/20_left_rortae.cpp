#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[(i + 1) % n];
    }
    arr[n - 1] = temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    rotate(arr, 9);
    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}