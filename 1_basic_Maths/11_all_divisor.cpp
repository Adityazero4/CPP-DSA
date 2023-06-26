#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// void AllDivisor(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }
void AllDivisor(int n) // TC->theat(sqrt(n))
{
    int i;
    for (i = 1; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    AllDivisor(n);
    return 0;
}