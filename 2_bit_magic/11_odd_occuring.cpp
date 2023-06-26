#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int OddOccuringNum(vector<int> arr, int n) // TC:O(n^2)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cnt++;
//             }
//         }
//         if (cnt % 2 != 0)
//         {
//             return arr[i];
//         }
//     }
//     return -1;
// }

// Efficient Solution
int OddOccuringNum(vector<int> arr, int n) // TC:O(n^2)
{
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
    }
    return x;
}
int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << OddOccuringNum(arr, n);
    return 0;
}