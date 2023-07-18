

class Solution
{
public:
    // Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int>> matrix, int n, int m, int x)
    {
        // code here
        int r = 0, c = m - 1;
        while (r < n && c >= 0)
        {
            if (matrix[r][c] == x)
            {
                return true;
            }
            else if (matrix[r][c] > x)
            {
                c--;
            }
            else if (matrix[r][c] < x)
            {
                r++;
            }
        }
        return false;
    }
};