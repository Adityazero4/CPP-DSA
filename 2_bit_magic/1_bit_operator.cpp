#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 3, y = 6;
    cout << (x & y) << endl;
    cout << (x | y) << endl;
    cout << (x ^ y) << endl;

    cout << (x << 1) << endl;
    cout << (x << 2) << endl;
    cout << (x << 4) << endl;

    x = 33;
    cout << (x >> 1) << endl;
    cout << (x >> 2) << endl;
    cout << (x >> 4) << endl;

    x = 1;
    cout << (~x) << endl;

    unsigned int z = 1;
    cout << (~z) << endl;
    return 0;
}