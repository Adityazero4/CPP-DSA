#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        cnt = cnt + (n & 1);
        n = n >> 1;
    }
    return cnt;
}
int brian_kerringham(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    cout << countSetBits(n) << endl;
    cout << brian_kerringham(n) << endl;
    cout << __builtin_popcount(n); // default gcc function
    return 0;
}