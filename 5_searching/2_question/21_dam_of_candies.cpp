//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    int maxCandy(int height[], int n)
    {
        // Your code goes here
        int l = 0;
        int h = n - 1;
        int res = 0;
        while (l < h)
        {
            int temp = min(height[h], height[l]) * (h - l - 1);
            res = max(res, temp);
            if (height[l] < height[h])
            {
                l++;
            }
            else
            {
                h--;
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int height[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> height[i];
        }

        Solution obj;

        cout << obj.maxCandy(height, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends