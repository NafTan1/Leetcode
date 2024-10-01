/*
Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150
*/

class Solution
{
public:
    vector<int> nums;
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        for (int e : nums)
        {
            if (i == 0 || i == 1 || nums[i - 2] != e)
            {
                nums[i] = e;
                i++;
            }
        }
        return i;
    }
};
