#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n, int i = 2)
{
    if (i > n)
    {
        return true;
    }
    if (n % i == 0)
    {
        return false;
    }
    isLucky(n - n / i, i + 1);
}
int main()
{
    int n;
    cin >> n;
    cout << isLucky(n);
    return 0;
}