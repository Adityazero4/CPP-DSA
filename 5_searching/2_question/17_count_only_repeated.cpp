// User function template for C++
/*
1.using binary search, i=0, j=n-1, mid=(i+j)/2.
2.suppose the arr is [1,2,3,4,4], mid = (0+4)/2=2. arr[mid]=3,
3.which is equal to arr[0]+mid. This means, repeating element is in the 2nd half of the arr, we increase i.
4.if the above condition is false, e.g. arr = [1,2,2,3,4], arr[mid]=2 which is less than arr[0]+mid, so repeating element in the first half. This is how we find the repeating element.


5.Frequency: We know numbers are in the range of n, so we can simply subtract arr[n-1] from arr[0] to find the range & the subtract n from this to find the freq of the repeating element,
if this freq==1, we simply return -1.
*/
// User function template for C++

class Solution
{
public:
    // Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n)
    {
        // code here
        int l = 0;
        int h = n - 1;
        int cnt = n - (arr[n - 1] - arr[0]);
        int mid = 0;
        if (cnt == 1)
        {
            return {-1, -1};
        }
        while (l <= h)
        {
            mid = (l + h) / 2;
            if (arr[mid] == mid + arr[0])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return {arr[mid], cnt};
    }
};