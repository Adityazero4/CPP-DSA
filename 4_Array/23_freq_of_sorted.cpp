#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printFreq(int arr[], int n)
{
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            cnt++;
        }
        else
        {
            cout << arr[i - 1] << " " << cnt << endl;
            cnt = 1;
        }
    }
    cout << arr[n - 1] << " " << cnt << endl;
}
int main()
{
    int arr[] = {10, 10, 10, 20, 20, 30, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    printFreq(arr, n);
    return 0;
}