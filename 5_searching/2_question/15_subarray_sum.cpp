class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s)
    {
        // Your code here
        int l = 0;
        int r = 0;
        vector<int> ans;
        long long sum = 0;
        if (s == 0)
        {
            ans.push_back(-1);
            return ans;
        }
        while (r < n)
        {
            sum += arr[r];
            while (sum > s)
            {
                sum -= arr[l];
                l++;
            }
            if (sum == s)
            {
                ans.push_back(l + 1);
                ans.push_back(r + 1);
                return ans;
            }
            r++;
        }
        ans.push_back(-1);
        return ans;
    }
};