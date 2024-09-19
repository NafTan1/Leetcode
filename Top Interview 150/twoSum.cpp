/*
Problem Link: https://leetcode.com/problems/two-sum/?envType=study-plan-v2&envId=top-interview-150
*/
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            int more = target - num;
            if (mp.count(more))
            {
                return {i, mp[more]};
            }
            mp[num] = i;
        }
        return {};
    }
};
