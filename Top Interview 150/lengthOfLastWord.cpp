/*
Problem Link: https://leetcode.com/problems/length-of-last-word/
*/

// Solution 1
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        stringstream ss(s);
        string word;
        vector<string> v;
        while (ss >> word)
        {
            v.push_back(word);
        }
        string t = v.back();
        return t.size();
    }
};

// Optimized Solution
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int length = 0;
        bool count = false;
        int sz = s.size();
        for (int i = sz - 1; i >= 0; i--)
        {
            if (s[i] != ' ')
            {
                count = true;
                length++;
            }
            else if (count)
            {
                break;
            }
        }
        return length;
    }
};