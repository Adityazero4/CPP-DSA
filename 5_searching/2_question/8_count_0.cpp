//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int countZeroes(int arr[], int n)
    {
        // code here
        int l = 0;
        int h = n - 1;
        int lindex = -1;
        sort(arr, arr + n);
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (arr[mid] == 0)
            {
                lindex = mid;
                l = mid + 1;
            }
            else if (arr[mid] == 1)
            {
                h = mid - 1;
            }
        }
        return lindex + 1;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends