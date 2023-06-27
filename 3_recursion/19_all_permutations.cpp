#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printPermutations(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << " ";
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        printPermutations(s, i + 1);
        swap(s[i], s[j]);
    }
}
int main()
{
    string s;
    cin >> s;
    printPermutations(s);
    return 0;
}