class Solution
{
    public:
        int pivotIndex(vector<int> &nums)
        {
            int size = nums.size();
            int *left = new int[size];
            int *right = new int[size];
            int sum1 = 0, sum2 = 0;
            for (int i = 0; i < size; i++)
            {
                left[i] = sum1;
                sum1 += nums[i];
                right[size - 1 - i] = sum2;
                sum2 += nums[size - 1 - i];
            }

            for (int i = 0; i < size; i++)
            {
                if (left[i] == right[i])
                {
                    delete[] left;
                    delete[] right;
                    return i;
                }
            }
            delete[] left;
            delete[] right;
            return -1;
        }
};