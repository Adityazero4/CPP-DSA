#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Naive solution
//  int LCM(int n1, int n2)
//  {
//      int res = n1 * n2;
//      for (int i = 1; i <= n1 * n2; i++)
//      {
//          if (i % n1 == 0 && i % n2 == 0)
//          {
//              res = i;
//              break;
//          }
//      }
//      return res;
//  }

// Better Method
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int LCM(int a, int b)
{
    return (a * b) / gcd(a, b);
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << LCM(n1, n2);
    return 0;
}