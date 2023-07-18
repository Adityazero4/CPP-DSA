//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int subArraySum(int arr[], int n, int sum)
    {
        // code here.
        int presum = 0;
        int cnt = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            presum += arr[i];
            int x = presum - sum;
            if (sum == presum)
            {
                cnt++;
            }
            if (mp.find(x) != mp.end())
            {
                cnt += mp[x];
            }
            mp[presum]++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> sum;
        Solution ob;
        cout << ob.subArraySum(arr, n, sum);
        cout << '\n';
    }
    return 0;
}
// } Driver Code Ends