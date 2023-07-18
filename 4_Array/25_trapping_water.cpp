//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        // code here
        int lmax[n];
        int rmax[n];
        lmax[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            lmax[i] = max(lmax[i - 1], arr[i]);
        }
        rmax[n - 1] = rmax[n - 1];
        for (int j = n - 2; j >= 0; j--)
        {
            rmax[j] = max(rmax[j + 1], arr[j]);
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = min(lmax[i], rmax[i]) - arr[i];
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends