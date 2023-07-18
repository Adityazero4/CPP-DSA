class Solution
{
public:
    int findMin(int arr[], int n)
    {
        // complete the function here
        int l = 0;
        int h = n - 1;
        int res = INT_MAX;
        while (h >= l)
        {
            int mid = (l + h) / 2;
            if (arr[l] <= arr[mid])
            {
                res = min(arr[l], res);
                l = mid + 1;
            }
            else
            {
                res = min(arr[mid], res);
                h = mid - 1;
            }
        }
        return res;
    }
};