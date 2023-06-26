#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int y = ~(1 << (n - 1));
    cout << (x & y);
    return 0;
}