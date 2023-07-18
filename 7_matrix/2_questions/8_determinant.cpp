

class Solution
{
public:
    // Function for finding determinant of matrix.
    int determinantOfMatrix(vector<vector<int>> matrix, int n)
    {
        // code here
        int D = 0;
        if (n == 1)
        {
            return matrix[0][0];
        }
        int sign = 1;
        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> temp = getCofactor(matrix, 0, i, n);
            D += sign * matrix[0][i] * determinantOfMatrix(temp, temp[0].size());
            sign = -sign;
        }
        return D;
    }

    vector<vector<int>> getCofactor(vector<vector<int>> &matrix, int p, int q, int n)
    {
        int i = 0, j = 0;
        vector<vector<int>> temp;
        for (int row = 0; row < n; row++)
        {
            vector<int> v;
            for (int col = 0; col < n; col++)
            {
                if (row != p && col != q)
                {
                    v.push_back(matrix[row][col]);
                }
            }
            if (!v.empty())
            {
                temp.push_back(v);
            }
        }
        return temp;
    }
};