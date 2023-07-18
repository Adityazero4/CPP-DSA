class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        // Your code goes here
        set<int> st;
        sort(b, b + m);
        for (int i = 0; i < n; i++)
        {
            if (binary_search(b, b + m, a[i]))
            {
                st.insert(a[i]);
            }
        }
        return st.size();
    }
};
class Solution
{
public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m)
    {
        // Your code goes here
        sort(a, a + n);
        sort(b, b + m);
        set<int> st;
        int i = 0;
        int j = 0;
        while (i < n && j < m)
        {
            if (a[i] > b[j])
            {
                j++;
            }
            else if (a[i] < b[j])
            {
                i++;
            }
            else
            {
                st.insert(a[i]);
                i++;
                j++;
            }
        }
        return st.size();
    }
};