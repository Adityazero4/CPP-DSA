
class Solution
{
public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(int A[], int N)
    {
        // Your code here
        int step = 0;
        int res = 0;
        for (int i = 1; i < N; i++)
        {
            if (A[i] > A[i - 1])
            {
                step++;
            }
            else
            {
                res = max(res, step);
                step = 0;
            }
        }
        res = max(res, step);
        return res;
    }
};