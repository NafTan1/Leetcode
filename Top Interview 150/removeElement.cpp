/*
Problem Link: https://leetcode.com/problems/remove-element/?envType=study-plan-v2&envId=top-interview-150
*/

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int k = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
