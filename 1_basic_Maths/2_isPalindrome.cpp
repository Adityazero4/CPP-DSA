#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    int org = n;
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }
    return org == rev;
}
int main()
{
    int n;
    cin >> n;
    bool res = isPalindrome(n);
    cout << res;
    return 0;
}