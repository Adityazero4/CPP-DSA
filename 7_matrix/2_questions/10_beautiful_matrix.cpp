

class Solution
{
public:
    // Function to find minimum number of operations that are required
    // to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int>> matrix, int n)
    {
        // code here
        int rowMax = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];
            }
            rowMax = max(sum, rowMax);
        }
        int colMax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += matrix[j][i];
            }
            colMax = max(sum, colMax);
        }
        int maxSum = max(rowMax, colMax);
        int op = 0;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += matrix[i][j];
            }
            op += maxSum - sum;
        }
        return op;
    }
};