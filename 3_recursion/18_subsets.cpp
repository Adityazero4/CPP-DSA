#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool Countsubsets(int arr[], int n, int sum)
{
    if (n == 0)
    {
        return sum == 0 ? 1 : 0;
    }
    return Countsubsets(arr, n - 1, sum) + Countsubsets(arr, n - 1, sum - arr[n - 1]);
}
int main()
{
    int arr[] = {10, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 25;
    cout << Countsubsets(arr, n, sum);
    return 0;
}