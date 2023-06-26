#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}

// Tail Factorial
int TailFactorial(int n, int k)
{
    if (n == 0 || n == 1)
    {
        return k;
    }
    return TailFactorial(n - 1, n * k);
}
int main()
{
    int n;
    cin >> n;
    cout << Factorial(n);
    cout << endl;
    int k = 1;
    cout << TailFactorial(n, k);
    return 0;
}