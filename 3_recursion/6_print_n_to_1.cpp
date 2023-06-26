#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Series(int n)
{
    if (n <= 0)
    {
        return;
    }
    cout << n << " ";
    Series(n - 1);
}
int main()
{
    int n;
    cin >> n;
    Series(n);
    return 0;
}