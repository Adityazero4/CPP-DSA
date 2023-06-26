#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int calculateSquare(int n)
{
    if (n < 0)
    {
        n = -(n);
    }
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    int x = n >> 1;
    if (n & 1)
    {
        return (calculateSquare(x) << 2) + (x << 2) + 1;
    }
    else
    {
        return (calculateSquare(x) << 2);
    }
}
int main()
{
    int n;
    cin >> n;
    cout << calculateSquare(n);
    return 0;
}