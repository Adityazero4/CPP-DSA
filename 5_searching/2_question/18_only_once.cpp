class Solution
{
public:
    int findOnce(int arr[], int n)
    {
        // code here.
        if (n == 1)
        {
            return arr[0];
        }
        for (int i = 0; i < n;)
        {
            if (arr[i] != arr[i + 1])
            {
                return arr[i];
            }
            else
            {
                i = i + 2;
            }
        }
        return -1;
    }
};
class Solution
{
public:
    int findOnce(int arr[], int n)
    {
        // code here.
        if (n == 1)
        {
            return arr[0];
        }
        int l = 0;
        int h = n - 1;
        while (h >= l)
        {
            int mid = (l + h) / 2;
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            {
                return arr[mid];
            }
            else if (arr[mid] == arr[mid - 1] && arr[mid] != arr[mid + 1])
            {
                if (mid % 2 == 0)
                {
                    h = mid - 2;
                }
                else
                {
                    l = mid + 1;
                }
            }
            else if (arr[mid] == arr[mid + 1] && arr[mid] != arr[mid - 1])
            {
                if (mid % 2 == 0)
                {
                    l = mid + 2;
                }
                else
                {
                    h = mid - 1;
                }
            }
        }
        return -1;
    }
};
class Solution
{
public:
    int findOnce(int arr[], int n)
    {
        // code here.
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= arr[i];
        }
        return ans;
    }
};