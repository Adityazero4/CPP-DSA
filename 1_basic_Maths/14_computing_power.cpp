#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int ComputingPower(int x, int n) // TC:O(n)
// {
//     int ans = 1;
//     for (int i = 1; i < n; i++)
//     {
//         ans = ans * x;
//     }
//     return ans;
// }
int ComputingPower(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = ComputingPower(x, n / 2);
    ans = ans * ans;
    if (n % 2 == 0)
    {
        return ans;
    }
    else
    {
        return ans * x;
    }
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << ComputingPower(x, n);
    return 0;
}