#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int toh(int n, int from, int to, int aux)
{
    if (n == 1)
    {
        cout << "move disk 1 from rod " << from << " to rod " << to << endl;
        cnt++;
        return cnt;
    }
    toh(n - 1, from, aux, to);
    cout << "move disk " << n << " from rod " << from << " to rod " << to << endl;
    cnt++;
    toh(n - 1, aux, to, from);
}
int main()
{
    int n;
    cin >> n;
    cout << toh(n, 1, 3, 2);
    return 0;
}