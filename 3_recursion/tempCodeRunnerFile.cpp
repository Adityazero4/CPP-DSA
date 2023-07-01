int helper(int n)
    {
        int sum = 0;
        while (n != 0)
        {
            int dig = n % 10;
            sum += pow(dig, 2);
            n = n / 10;
        }
        return sum;
    }
    int nextHappy(int N)
    {
        // code here
        for (int i = N + 1;; i++)
        {
            if (helper(i) == 1)
            {
                return i;
            }
        }
    }