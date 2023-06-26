#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int trailingZeroes(int n)
// {
//     int cnt = 0;
//     long long fact = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         fact *= i;
//     }
//     while (fact % 10 == 0)
//     {
//         cnt++;
//         fact = fact / 10;
//     }
//     return cnt;
// }
int trailingZeroes(int n)
{
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}