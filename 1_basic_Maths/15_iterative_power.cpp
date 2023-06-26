#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int IterativePower(int x, int n)
{
    int ans = 1;
    while (n != 0)
    {
        if (n % 2 != 0)
        { // odd
            // bit is set to 1
            ans = ans * x;
        }
        n = n / 2;
        x = x * x;
    }
    return ans;
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << IterativePower(x, n);
    return 0;
}