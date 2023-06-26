#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Time Complexity->O(no. of digits) Auxiliary Space->O(no. of digits)
// Iteraitve solution is preferred
int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}
int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n);
    return 0;
}