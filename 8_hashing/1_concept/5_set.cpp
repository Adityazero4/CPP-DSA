#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set<int, greater<int>> s1;//descending order
    set<int> s1; // ascending order
    s1.insert(10);
    s1.insert(5);
    s1.insert(12);
    s1.insert(4);
    for (auto i : s1)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << s1.size() << endl;
    cout << s1.empty() << endl;
    s1.erase(12);
    for (auto i : s1)
    {
        cout << i << " ";
    }
    cout << endl;
    if (s1.find(4) != s1.end())
    {
        cout << "Found 4" << endl;
    }
    s1.clear();
    cout << s1.size();
    return 0;
}