//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Next Happy Number
// For a given non -negative integer N,find the next smallest Happy Number.
// A number is called Happy if it leads to 1 after a sequence of steps.Wherein at each step the number is replaced by the sum
// of squares of its digits that is, if we start with Happy Number and keep replacing it with sum of squares of its digits,
// we reach 1 at some point.
class Solution
{
public:
    int sumOfPow(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            sum += pow(digit, 2);
            n = n / 10;
        }
        return sum;
    }
    bool helper(int n)
    {
        set<int> temp;
        while (1)
        {
            n = sumOfPow(n);
            if (n == 1)
            {
                return true;
            }
            if (temp.find(n) != temp.end())
            {
                return false;
            }
            temp.insert(n);
        }
    }
    int nextHappy(int N)
    {
        // code here
        N = N + 1;
        while (helper(N) != true)
        {
            N++;
        }
        return N;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends