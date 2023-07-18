//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    // Also called kadane's Algorithm
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code here
        long long sum = 0;
        long long res = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            res = max(sum, res);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return res;

        // second approach:
        int maxEnding = arr[0];
        int sol = arr[0];
        for (int i = 1; i < n; i++)
        {
            maxEnding = max(maxEnding + arr[i], arr[i]);
            sol = max(sol, maxEnding);
        }
        return sol;
    }
};

//{ Driver Code Starts.

int main()
{
    int t, n;

    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {

        cin >> n; // input size of array

        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i]; // inputting elements of array

        Solution ob;

        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends