#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void Find2Odd(vector<int> arr, int n)
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
//             cout << arr[i] << " ";
//         }
//     }
// }
void Find2Odd(vector<int> arr, int n)
{
    int x = arr[0];
    for (int i = 1; i < n; i++)
    {
        x = x ^ arr[i];
    }
    cout << x << endl;
    int k = x & (~(x - 1));
    int y = 0, z = 0;
    for (int i = 0; i < n; i++)
    {

        if ((arr[i] & k) != 0)
        {
            y = y ^ arr[i];
        }
        else
        {
            z = z ^ arr[i];
        }
    }
    cout << y << " " << z;
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
    Find2Odd(arr, n);
    return 0;
}