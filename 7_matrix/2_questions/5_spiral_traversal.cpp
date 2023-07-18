class Solution
{
public:
    // Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        // code here
        vector<int> ans;
        int left = 0;
        int right = c - 1;
        int top = 0;
        int down = r - 1;
        while (left <= right && top <= down)
        {
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;

            for (int i = top; i <= down; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;
            if (top <= down)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[down][i]);
                }
                down--;
            }
            if (left <= right)
            {
                for (int i = down; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};