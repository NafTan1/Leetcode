/*
Problem Link : https://leetcode.com/problems/find-pivot-index/description/
*/

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        vector<int> l_sum;
        vector<int> r_sum;
        l_sum.push_back(0);
        l_sum.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            l_sum.push_back(nums[i] + l_sum[i]);
        }
        r_sum.push_back(0);
        r_sum.push_back(nums[nums.size() - 1]);
        int k = 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            int x = nums[i] + r_sum[k];
            r_sum.push_back(x);
            k++;
        }
        reverse(r_sum.begin(), r_sum.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (l_sum[i] == r_sum[i + 1])
                return i;
        }
        return -1;
    }
};