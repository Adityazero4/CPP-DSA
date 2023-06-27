#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Subsets(string s, string curr = "", int i = 0)
{
    if (s.length() == i)
    {
        cout << curr << " ";
        return;
    }
    Subsets(s, curr, i + 1);
    Subsets(s, curr + s[i], i + 1);
}
int main()
{
    string s;
    cin >> s;
    Subsets(s);

    return 0;
}