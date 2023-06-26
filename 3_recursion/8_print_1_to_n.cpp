#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Non Tail Recursive
void Print1ton(int n)
{
    if (n == 0)
    {
        return;
    }
    Print1ton(n - 1);
    cout << n << " ";
}

// Tail Recursive
void TailPrint(int n, int k)
{
    if (n == 0)
    {
        return;
    }
    cout << k << " ";
    TailPrint(n - 1, k + 1);
}
int main()
{
    int n;
    cin >> n;
    Print1ton(n);
    cout << endl;
    int k = 1;
    TailPrint(n, k);
    return 0;
}