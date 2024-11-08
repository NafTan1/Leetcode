/*
Problem Link: https://leetcode.com/problems/container-with-most-water/
*/

class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int l = 0;
        int r = height.size() - 1;
        int result = 0;

        while (l < r)
        {
            int left = height[l];
            int right = height[r];
            int area = min(left, right) * (r - l);
            result = max(result, area);
            if (left < right)
                l++;
            else
                r--;
        }
        return result;
    }
};