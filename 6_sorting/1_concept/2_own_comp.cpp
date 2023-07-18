#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
};
bool myCompx(Point p1, Point p2)
{
    return (p1.x < p2.x);
}
bool myCompy(Point p1, Point p2)
{
    return p1.y >= p2.y;
}
int main()
{
    Point arr[] = {{3, 5}, {7, 1}, {1, 9}};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, myCompx);
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }
    sort(arr, arr + n, myCompy);
    for (auto i : arr)
    {
        cout << i.x << " " << i.y << endl;
    }
    return 0;
}