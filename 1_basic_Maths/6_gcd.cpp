#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Naive Approach
//  int GCD(int n1, int n2)
//  {
//      int m = min(n1, n2);
//      int ans = 1;
//      for (int i = 2; i <= m; i++)
//      {
//          if (n1 % i == 0 && n2 % i == 0)
//          {
//              ans = i;
//          }
//      }
//      return ans;
//  }

// Eucliedean Algorithm
// int GCD(int n1, int n2)
// {
//     while (n1 != n2)
//     {
//         if (n1 > n2)
//         {
//             n1 = n1 - n2;
//         }
//         else
//         {
//             n2 = n2 - n1;
//         }
//     }
//     return n1;
// }

// Optimized eucliedean Alogrithm->TC:O(log(min(a,b)))
int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << GCD(n1, n2);
    return 0;
}