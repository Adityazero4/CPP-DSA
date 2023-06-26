#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.length();
    if (n == 0)
    {
        return true;
    }
    if (n == 1)
    {
        return true;
    }
    return (s[0] == s[n - 1]) && isPalindrome(s.substr(1, n - 2));
}
int main()
{
    string s;
    cin >> s;
    cout << isPalindrome(s);
    return 0;
}