#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void Seive(int n)
// {
//     vector<bool> isPrime(n + 1, true);
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (isPrime[i])
//         {
//             for (int j = 2 * i; j <= n; j = j + i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (isPrime[i])
//         {
//             cout << i << " ";
//         }
//     }
// }
// Optimized:TC:O(n*log(log(n)))
void Seive(int n)
{
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Seive(n);
    return 0;
}