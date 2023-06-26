#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int DigitsInFactorial(int n)
{
    double res = 0;
    for (int i = 1; i <= n; i++)
    {
        res += log10(i);
    }
    return floor(res) + 1;
}

int main()
{
    int n;
    cin >> n;
    cout << DigitsInFactorial(n);
    return 0;
}