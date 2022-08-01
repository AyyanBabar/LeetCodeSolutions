class Solution
{
    public:
        bool isIsomorphic(string s, string t)
        {
            map<char, char> m;
            map<char, char> lock;
            for (int i = 0; i < t.length(); i++)
            {   char temp;
                if (!(temp=lock[t[i]]))
                {
                    m[s[i]] = t[i];
                    lock[t[i]] = s[i];
                }
                else if (temp != s[i])
                {
                    return false;
                }
            }
            for (int i = 0; i < s.length(); i++)
            {
                if (m[s[i]])
                    s[i] = m[s[i]];
            }
            return s == t;
        }
};