class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            for (int i = 0; i < nums.size() - 1; i++)
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (nums[i] + nums[j] == target)
                    {
                        vector<int> temp = { i,
                            j
                        };
                        return temp;
                    }
                }
            }
            vector<int> temp = { 0,
                0
            };
            return temp;
        }
};