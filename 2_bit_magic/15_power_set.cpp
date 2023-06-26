#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcd";
    int len = s.length();
    int p = (1 << len);
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                cout << s[j];
            }
        }
        cout << endl;
    }

    return 0;
}