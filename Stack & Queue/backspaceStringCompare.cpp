class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<int> st;
        stack<int> st2;
        for (char c : s)
        {
            if (c != '#')
            {
                st.push(c);
            }
            else if (!st.empty())
                st.pop();
        }
        for (char c : t)
        {
            if (c != '#')
            {
                st2.push(c);
            }
            else if (!st2.empty())
                st2.pop();
        }
        return st == st2;
    }
};