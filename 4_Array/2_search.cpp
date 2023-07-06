#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int s)
{
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == n)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int n;
    cin >> n;
    int s = sizeof(arr) / sizeof(arr[0]);
    cout << search(arr, n, s);
    return 0;
}