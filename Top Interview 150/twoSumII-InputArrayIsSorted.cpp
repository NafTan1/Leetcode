/*
Problem Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        map<int, int> mp;
        int r = numbers.size() - 1;
        int l = 0;
        while (l < r)
        {
            if (numbers[l] + numbers[r] == target)
            {
                return {l + 1, r + 1};
            }
            if (numbers[l] + numbers[r] > target)
                r--;
            else
                l++;
        }
        return {};
    }
};