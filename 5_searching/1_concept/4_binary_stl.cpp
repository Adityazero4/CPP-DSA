#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 15, 20, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20;
    if (binary_search(arr, arr + n, 200))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}