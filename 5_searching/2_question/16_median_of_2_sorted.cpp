// User function Template for C++

class Solution
{
public:
    double MedianOfArrays(vector<int> &array1, vector<int> &array2)
    {
        // Your code goes here
        int m = array1.size();
        int n = array2.size();
        if (m > n)
        {
            return MedianOfArrays(array2, array1);
        }
        int s = 0;
        int e = m;
        while (e >= s)
        {
            int i1 = (s + e) / 2;
            int i2 = (m + n + 1) / 2 - i1;
            int min1 = (i1 == m) ? INT_MAX : array1[i1];
            int max1 = (i1 == 0) ? INT_MIN : array1[i1 - 1];

            int min2 = (i2 == n) ? INT_MAX : array2[i2];
            int max2 = (i2 == 0) ? INT_MIN : array2[i2 - 1];

            if (min1 >= max2 && min2 >= max1)
            {
                if ((m + n) % 2 == 0)
                {
                    return ((double)max(max1, max2) + min(min1, min2)) / 2;
                }
                else
                {
                    return (double)max(max1, max2);
                }
            }
            else if (min1 < max2)
            {
                s = i1 + 1;
            }
            else
            {
                e = i1 - 1;
            }
        }
    }
};