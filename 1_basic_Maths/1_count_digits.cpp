#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countDigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}
// Time Complexity-O(n) or theta(n)
int main()
{
    int n;
    cin >> n;
    cout << "Digits in The Number is: " << countDigit(n);
    return 0;
}