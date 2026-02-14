/*
Problem Link: https://leetcode.com/problems/assign-cookies/description/
*/

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int answer = 0;
        int k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (k == g.size())
                break;
            if (s[i] >= g[k])
            {
                k++;
                answer++;
            }
        }
        return answer;
    }
};