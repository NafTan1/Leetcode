/*
Problem Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
*/

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        sort(nums.begin(), nums.end(), greater<int>());
        int a = nums[0];
        int b = nums[1];
        int res = (a - 1) * (b - 1);
        return res;
    }
};