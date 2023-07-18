// User function template for C++

class Solution
{
public:
    int median(vector<vector<int>> &matrix, int R, int C)
    {
        // code here
        int mn = matrix[0][0];
        int mx = matrix[0][C - 1];
        for (int i = 0; i < R; i++)
        {
            mn = min(mn, matrix[i][0]);
            mx = max(mx, matrix[i][C - 1]);
        }
        int medPos = (R * C + 1) / 2;
        while (mn < mx)
        {
            int mid = (mn + mx) / 2;
            int midPos = 0;
            for (int i = 0; i < R; i++)
            {
                midPos += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
            }
            if (midPos < medPos)
            {
                mn = mid + 1;
            }
            else
            {
                mx = mid;
            }
        }
        return mn;
    }
};
// User function template for C++

class Solution
{
public:
    int median(vector<vector<int>> &matrix, int R, int C)
    {
        // code here
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> temp;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                temp.push_back(matrix[i][j]);
            }
        }
        sort(temp.begin(), temp.end());
        return temp[(row * col) / 2];
    }
};