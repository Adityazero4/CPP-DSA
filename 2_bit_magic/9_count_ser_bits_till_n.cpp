#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max2x(int n)
{
    int x = 0;
    while ((1 << x) <= n)
    {
        x++;
    }
    return x - 1;
}

int countSetBits(int n)
{
    // Your logic here
    if (n == 0)
    {
        return 0;
    }
    int x = max2x(n);
    int till2x = x * (1 << (x - 1));
    int msbtill2xton = n - (1 << x) + 1;
    int rest = n - (1 << x);
    int ans = till2x + msbtill2xton + countSetBits(rest);
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << countSetBits(n);
    return 0;
}