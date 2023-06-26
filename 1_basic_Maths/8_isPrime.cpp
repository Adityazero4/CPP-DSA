#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// bool isPrime(int n) // TC:O(n) i.e when n is prime number
// {
//     if (n == 1) // 1 is neither prime nor composite
//     {
//         return false;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// Efficient Method->TC:O(sqrt(n))
//  bool isPrime(int n)
//  {
//      if (n == 1)
//      {
//          return false;
//      }
//      for (int i = 2; i <= sqrt(n); i++)
//      {
//          if (n % i == 0)
//          {
//              return false;
//          }
//      }
//      return true;
//  }

// More Efficient Method:TC:O(sqrt(n)) and three times faster than previous method
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << isPrime(n);
    return 0;
}