#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Sum of digits from 1 to N
int sumOfDigits(int n)
{
    int c = 0;
    for (int i = 1; i <= n; i = i * 10)
    {
        c = c + (n - i + 1);
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}