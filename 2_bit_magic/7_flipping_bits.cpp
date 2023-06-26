#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n;
    cin >> n;
    int flipped = 31 - n;
    cout << flipped << endl;
    cout << (~n) << endl;
    return 0;
}