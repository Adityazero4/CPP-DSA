#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if (m == n)
    {
        cout << -1;
    }
    else
    {
        int y = m ^ n;
        cout << log2((y & (-y))) + 1 << endl;
    }
    return 0;
}