#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int longestEvenOddSubarray(int arr[], int n)
// {
//     int res = 1;
//     for (int i = 0; i < n; i++)
//     {
//         int curr = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[j] % 2 == 0 && arr[j - 1] % 2 == 1 || arr[j] % 2 == 1 && arr[j - 1] % 2 == 0)
//             {
//                 curr++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         res = max(res, curr);
//     }
//     return res;
// }
int longestEvenOddSubarray(int arr[], int n)
{
    int res = 1;
    int curr = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i + 1] % 2 == 1)
            {
                curr++;
                res = max(res, curr);
            }
            else
            {
                curr = 1;
            }
        }
        else if (arr[i] % 2 == 1)
        {
            if (arr[i + 1] % 2 == 0)
            {
                curr++;
                res = max(res, curr);
            }
            else
            {
                curr = 1;
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {10, 9, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << longestEvenOddSubarray(arr, n);
    return 0;
}