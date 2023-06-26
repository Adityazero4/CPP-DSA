#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// bool isPowerof2(int n)
// {
//     bool ans = false;
//     int x = 1;
//     while ((1 << x) <= n)
//     {
//         if ((1 << x) == n)
//         {
//             return true;
//         }
//         x++;
//     }
//     return false;
// }

// Optmized Method
// bool isPowerof2(int n)
// {

//     int cnt = 0;
//     if (n == 1)
//     {
//         return false;
//     }
//     while (n != 0)
//     {
//         n = n & (n - 1);
//         cnt++;
//     }
//     if (cnt == 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// More Optimized:
bool isPowerof2(int n)
{

    if (n == 0)
    {
        return false;
    }
    return ((n & (n - 1)) == 0);
}
int main()
{
    int n;
    cin >> n;
    cout << isPowerof2(n);
    return 0;
}