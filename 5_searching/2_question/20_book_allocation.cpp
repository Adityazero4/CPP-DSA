// User function template in C++

// Naive Approach
class Solution
{
public:
    // Function to find minimum number of pages.
    int sumPages(int A[], int s, int e)
    {
        int sum = 0;
        for (int i = s; i <= e; i++)
        {
            sum += A[i];
        }
        return sum;
    }
    int findPages(int A[], int N, int M)
    {
        // code here
        if (M == 1)
        {
            return sumPages(A, 0, N - 1);
        }
        if (N == 1)
        {
            return A[0];
        }
        int res = INT_MAX;
        for (int i = 1; i < N; i++)
        {
            res = min(res, max(findPages(A, i, M - 1), sumPages(A, i, N - 1)));
        }
        return res;
    }
};
// Optimized Approach