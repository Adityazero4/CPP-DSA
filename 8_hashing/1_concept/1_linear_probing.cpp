//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to fill the array elements into a hash table
    // using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        // Your code here
        vector<int> hashTable(hashSize, -1);
        int size = 0;
        for (int i = 0; i < sizeOfArray; i++)
        {
            if (size < hashSize)
            {
                if (hashTable[arr[i] % hashSize] == -1)
                {
                    hashTable[arr[i] % hashSize] = arr[i];
                    size++;
                }
                else
                {
                    int temp = arr[i];
                    while (hashTable[temp % hashSize] != -1 && hashTable[temp % hashSize] != arr[i])
                    {
                        temp += 1;
                    }
                    if (hashTable[temp % hashSize] == arr[i])
                    {
                        continue;
                    }
                    hashTable[temp % hashSize] = arr[i];
                    size++;
                }
            }
            else
            {
                break;
                return hashTable;
            }
        }
        return hashTable;
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

        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];

        vector<int> hash;
        Solution obj;
        hash = obj.linearProbing(hashSize, arr, sizeOfArray);

        for (int i = 0; i < hashSize; i++)
            cout << hash[i] << " ";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends