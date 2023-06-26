

#include <bits/stdc++.h>
using namespace std;

/*  Function to calculate the longest consecutive ones
 *   N: given input to calculate the longest consecutive ones
 */

int maxConsecutiveOnes(int N)
{
    // code here
    int max = 0;
    int cnt = 0;
    while (N != 0)
    {
        if ((N & 1) == 1)
        {
            cnt++;
            // cout<<cnt<<endl;
        }
        else
        {
            cnt = 0;
        }
        if (cnt >= max)
        {
            max = cnt;
        }
        N = N >> 1;
    }
    return max;
}

//{ Driver Code Starts.

// Driver Code
int main()
{

    int n;
    cin >> n; // input n
    cout << maxConsecutiveOnes(n);
    return 0;
}
// } Driver Code Ends