/*
Problem Link: https://leetcode.com/problems/top-k-frequent-elements/
*/

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> mp;

        for (int val : nums)
        {
            mp[val]++;
        }
        priority_queue<pair<int, int>> pq;
        vector<int> v;
        for (auto val : mp)
        {

            pq.push({val.second, val.first});
        }
        while (k--)
        {

            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};