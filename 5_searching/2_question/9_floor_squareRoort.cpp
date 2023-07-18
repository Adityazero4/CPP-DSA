#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int floorSqrt(int x)
{
    int l = 1;
    int h = x;
    int res = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        int msq = mid * mid;
        if (msq == x)
        {
            return mid;
        }
        else if (msq > x)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
            res = mid;
        }
    }
    return res;
}
int main()
{
    int x;
    cin >> x;
    cout << floorSqrt(x);
    return 0;
}