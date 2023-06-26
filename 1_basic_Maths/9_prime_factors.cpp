#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if (a == 1)
    {
        return false;
    }
    if (a == 2 || a == 3)
    {
        return true;
    }
    if (a % 2 == 0 || a % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i <= sqrt(a); i = i + 6)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Efficient solution
//  void PrimeFactors(int n)
//  {
//      if (n <= 1)
//      {
//          return;
//      }
//      for (int i = 2; i <= n; i++)
//      {
//          if (isPrime(i))
//          {
//              int temp = n;
//              while (temp % i == 0)
//              {
//                  cout << i << " ";
//                  temp /= i;
//              }
//          }
//      }
//  }
//

// More Efficient solution
void PrimeFactors(int n)
{
    if (n <= 1)
    {
        return;
    }
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n = n / 3;
    }
    for (int i = 5; i <= sqrt(n); i = i + 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 3)
    {
        cout << n;
    }
}

int main()
{
    int n;
    cin >> n;
    PrimeFactors(n);
    return 0;
}