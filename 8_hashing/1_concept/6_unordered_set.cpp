#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    s.insert(20);
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    if (s.find(15) != s.end())
    {
        cout << "Found " << *(s.find(15)) << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    if (s.count(10))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    cout << s.size() << endl;
    s.erase(10);
    cout << s.size() << endl;
    auto it = s.find(15);
    s.erase(it);
    cout << s.size() << endl;
    s.clear();
    cout << s.size() << endl;
    return 0;
}