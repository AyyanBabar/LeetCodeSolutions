class Solution
{
    public:
        int reverse(int x)
        {
            int temp = 0;
            bool neg = x < 0;
            if(x==INT_MIN)
                return 0;
            if (neg)
                x *= -1;
            try
            {
                while (x)
                {
                    int r = x % 10;
                    if(temp>INT_MAX/10)
                        return 0;
                    temp = (temp *10 + r);
                    x /= 10;
                }
            }
            catch (const runtime_error& error)
            {
                return 0;
            }
            return neg ? temp *-1 : temp;
        }
};