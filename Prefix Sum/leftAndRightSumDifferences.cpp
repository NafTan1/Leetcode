/*
Problem Link: https://leetcode.com/problems/left-and-right-sum-differences/description/
*/

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        vector<int> r_sum;
        vector<int> l_sum;
        vector<int> sum;
        l_sum.push_back(0);
        r_sum.push_back(0);
        if (nums.size() < 2)
        {
            int x = abs(l_sum[0] - r_sum[0]);
            sum.push_back(x);
            return sum;
        }
        l_sum.push_back(nums[0]);
        r_sum.push_back(nums[nums.size() - 1]);

        for (int i = 1; i < nums.size() - 1; i++)
        {
            l_sum.push_back(nums[i] + l_sum[i]);
        }
        int k = 1;
        for (int i = nums.size() - 2; i >= 1; i--)
        {
            r_sum.push_back(nums[i] + r_sum[k]);
            k++;
        }
        reverse(r_sum.begin(), r_sum.end());

        for (int i = 0; i < nums.size(); i++)
        {
            int x = abs(l_sum[i] - r_sum[i]);
            sum.push_back(x);
        }
        return sum;
    }
};