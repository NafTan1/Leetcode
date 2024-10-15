/*
Problem Link: https://leetcode.com/problems/majority-element/
*/

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        map<int, int> mp;

        for (int num : nums)
        {
            mp[num]++;
            if (mp[num] > (n / 2))
            {
                return num;
            }
        }

        return -1;
    }
};