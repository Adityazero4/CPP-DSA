#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int y = (1 << n);
    if ((x & y) != 0)
    {
        cout << "set";
    }
    else
    {
        cout << "not set";
    }
    return 0;
}