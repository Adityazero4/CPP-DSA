
class Solution
{
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        // Your code here
        sort(arr, arr + n);
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0 && arr[i] == num)
            {
                num++;
            }
        }
        return num;
    }
};

class Solution
{
public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n)
    {
        // Your code here
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                mp[arr[i]]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (mp[i] == 0)
            {
                return i;
            }
        }
        return n + 1;
    }
};