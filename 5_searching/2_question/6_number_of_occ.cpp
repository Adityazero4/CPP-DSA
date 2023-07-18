//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count(int arr[], int n, int x)
    {
        // code here
        int l = 0;
        int h = n - 1;
        int f = -1;
        int e = -1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (arr[mid] == x)
            {
                f = mid;
                h = mid - 1;
            }
            else if (arr[mid] > x)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        l = 0;
        h = n - 1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (arr[mid] == x)
            {
                e = mid;
                l = mid + 1;
            }
            else if (arr[mid] > x)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (e < 0 && f < 0)
        {
            return 0;
        }
        return e - f + 1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends