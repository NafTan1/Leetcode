/*
Problem Link: https://leetcode.com/problems/valid-anagram/
*/

// Solution 1
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // O(n) time and O(1) space
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

// Solution 2

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // O(nlogn) time and O(n) space
        map<char, int> mp;
        if (s.size() != t.size())
            return false;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        for (auto a : mp)
        {
            if (a.second != 0)
                return false;
        }
        return true;
    }
};