#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ar = {10, 20, 30, 40};
    for (auto it = ar.begin(); it < ar.end(); it++)
    {
        cout << *it << endl;
    }
    vector<int>::iterator ptr = ar.begin();
    advance(ptr, 2);
    cout << *ptr << endl;

    vector<int>::iterator nptr = ar.begin();
    vector<int>::iterator fptr = ar.end();

    auto it1 = next(nptr, 3);
    auto it2 = prev(fptr, 1);
    cout << *it1 << " " << *it2 << endl;
    return 0;
}