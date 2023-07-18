#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 7, 2, 3, 1};
    int n = 5;
    sort(arr, arr + n);
    cout << "Array:" << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(arr, arr + n, greater<int>());
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << "Vector" << endl;
    vector<int> v = {5, 10, 7, 20};
    sort(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}