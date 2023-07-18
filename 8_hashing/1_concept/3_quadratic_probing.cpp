//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to fill the array elements into a hash table
    // using Quadratic Probing to handle collisions.
    void QuadraticProbing(vector<int> &hash, int hashSize, int arr[], int N)
    {
        // Your code here
        int size = 0;
        for (int i = 0; i < N; i++)
        {
            int probe = arr[i] % hashSize;
            if (size < hashSize)
            {
                if (hash[probe] == -1)
                {
                    hash[probe] = arr[i];
                    size++;
                }
                int j = 0;
                while (hash[probe] != -1 && hash[probe] != arr[i])
                {
                    probe = (arr[i] % hashSize + (j * j)) % hashSize;
                    j++;
                }
                if (hash[probe] == arr[i])
                {
                    continue;
                }
                else
                {
                    hash[probe] = arr[i];
                    size++;
                }
            }
            else
            {
                break;
            }
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int hashSize;
        cin >> hashSize;

        int N;
        cin >> N;
        int arr[N];

        for (int i = 0; i < N; i++)
            cin >> arr[i];

        vector<int> hash(hashSize, -1);
        Solution obj;
        obj.QuadraticProbing(hash, hashSize, arr, N);

        for (int i = 0; i < hashSize; i++)
            cout << hash[i] << " ";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends