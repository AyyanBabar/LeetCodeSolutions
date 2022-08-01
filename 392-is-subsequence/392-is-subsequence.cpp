class Solution
{
    public:
        bool isSubsequence(string s, string t)
        {
            int j = 0;
            int si=t.length();
            for (int i = 0; i <si; i++)
            {
                if (s[j] == t[i])
                {
                    j++;
                }
            }
            return j == s.length();
        }
};