#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Recursive Solution->TC:theta(n) AS->theta(n)
//  int factorial(int n)
//  {
//      if (n == 1 || n == 0)
//      {
//          return 1;
//      }
//      else
//      {
//          return n * factorial(n - 1);
//      }
//  }

// Iterative Solution: TC->theta(n) AS:theta(1)
// Better
int factorial(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
    }
    return res;
}
int main()
{
    int n;
    cin >> n;
    int ans = factorial(n);
    cout << ans;
    return 0;
}