//{ Driver Code Starts
#inc / lude < bits / stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    // Function to check if array is sorted and rotated.

    // using two function
    // ii to check descending sorting and dd to to check ascending sorting
    // 1.finding min element in an array
    // 2.checking wether element before and after min are sorted or not
    // 3. then comparing first and last element
    bool ii(int arr[], int num)
    {
        int mini = 0;
        for (int i = 1; i < num; i++)
        {
            if (arr[i] < arr[mini])
            {
                mini = i;
            }
        }
        for (int i = 1; i < mini; i++)
        {
            if (arr[i] > arr[i - 1])
            {
                return false;
            }
        }
        for (int i = mini + 1; i < num - 1; i++)
        {
            if (arr[i + 1] > arr[i])
            {
                return false;
            }
        }
        if (arr[0] < arr[num - 1])
        {
            return true;
        }
        return false;
    }
    bool dd(int arr[], int num)
    {
        int mini = 0;
        for (int i = 1; i < num; i++)
        {
            if (arr[i] < arr[mini])
            {
                mini = i;
            }
        }
        for (int i = 1; i < mini; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                return false;
            }
        }
        for (int i = mini + 1; i < num - 1; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                return false;
            }
        }
        if (arr[0] > arr[num - 1])
        {
            return true;
        }
        return false;
    }
    bool checkRotatedAndSorted(int arr[], int num)
    {

        // Your code here
        return ii(arr, num) || dd(arr, num);
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    // testcases
    cin >> T;

    while (T--)
    {
        int num;
        // size of array
        cin >> num;
        int arr[num];

        // inserting elements
        for (int i = 0; i < num; ++i)
            cin >> arr[i];

        bool flag = false;
        Solution ob;

        // function call
        flag = ob.checkRotatedAndSorted(arr, num);

        // printing "No" if not sorted and
        // rotated else "Yes"
        if (!flag)
        {
            cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }

    return 0;
}
// } Driver Code Ends