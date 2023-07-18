//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void printVector(const vector<int> &a)
{
    for (auto e : a)
    {
        cout << e << " ";
    }
    cout << endl;
}

// } Driver Code Ends
class Solution
{
public:
    // A, B, and C: input sorted arrays
    // Function to merge three sorted vectors or arrays
    // into a single vector or array.
    vector<int> mergeThree(vector<int> &A, vector<int> &B, vector<int> &C)
    {
        // Your code here
        vector<int> ans;
        int m = A.size();
        int n = B.size();
        int o = C.size();
        int i = 0, j = 0, k = 0;
        while (i < m && j < n && k < o)
        {
            int temp = min(min(A[i], B[j]), C[k]);
            ans.push_back(temp);
            if (temp == A[i])
            {
                i++;
            }
            else if (temp == B[j])
            {
                j++;
            }
            else
            {
                k++;
            }
        }
        while (i < m && j < n)
        {
            if (A[i] <= B[j])
            {
                ans.push_back(A[i]);
                i++;
            }
            else
            {
                ans.push_back(B[j]);
                j++;
            }
        }
        while (i < m && k < o)
        {
            if (A[i] <= C[k])
            {
                ans.push_back(A[i]);
                i++;
            }
            else
            {
                ans.push_back(C[k]);
                k++;
            }
        }
        while (j < n && k < o)
        {
            if (B[j] <= C[k])
            {
                ans.push_back(B[j]);
                j++;
            }
            else
            {
                ans.push_back(C[k]);
                k++;
            }
        }
        while (i < m)
        {
            ans.push_back(A[i]);
            i++;
        }
        while (j < n)
        {
            ans.push_back(B[j]);
            j++;
        }
        while (k < o)
        {
            ans.push_back(C[k]);
            k++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, o;
        cin >> n >> m >> o;
        vector<int> A, B, C;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            A.push_back(x);
        }

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            B.push_back(x);
        }

        for (int i = 0; i < o; i++)
        {
            int x;
            cin >> x;
            C.push_back(x);
        }

        Solution obj;
        vector<int> ans = obj.mergeThree(A, B, C);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
        // obj.printVector(mergeThree(A, B, C));
    }

    return 0;
}

// } Driver Code Ends