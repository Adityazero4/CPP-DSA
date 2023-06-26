#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    cout << (x | (1 << (n - 1))) << endl;
    return 0;
}