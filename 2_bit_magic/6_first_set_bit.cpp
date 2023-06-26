#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Naive Approach
    // if (n == 0)
    // {
    //     cout << 0 << endl;
    // }
    // int cnt = 1;
    // while (n != 0)
    // {
    //     if (n & 1 == 1)
    //     {
    //         break;
    //     }
    //     cnt++;
    //     n = n / 2;
    // }
    // cout << cnt << endl;
    cout << floor(log2(n)) + 1 << endl; // shows position of last set bit
    cout << log2(n & -n) + 1 << endl;   // shows position of first set bit
    int m = 384, l = 887;
    int y = m ^ l;
    cout << log2(y & (-y)) + 1 << endl;

    return 0;
}