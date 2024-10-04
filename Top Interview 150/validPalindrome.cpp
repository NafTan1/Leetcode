/*
Problem Link: https://leetcode.com/problems/valid-palindrome/
*/

// Solution 1

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int a = 0;
        int b = s.size() - 1;
        while (a <= b)
        {
            if (!isalnum(s[a]))
            {
                a++;
                continue;
            }
            if (!isalnum(s[b]))
            {
                b--;
                continue;
            }
            if (tolower(s[a]) != tolower(s[b]))
                return false;
            a++;
            b--;
        }

        return true;
    }
};

// Solution 2
class Solution
{
public:
    bool isPalindrome(string s)
    {
        string t = "";
        for (char c : s)
        {
            if (isalpha(c) || isdigit(c))
            {
                if (c >= 'A' && c <= 'Z')
                {
                    c = c + 32;
                }
                t.push_back(c);
            }
        }
        int a = 0;
        int b = t.size() - 1;
        while (a <= b)
        {
            if (t[a] != t[b])
                return false;
            a++;
            b--;
        }

        return true;
    }
};