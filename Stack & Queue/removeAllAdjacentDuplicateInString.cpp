class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> st;
        string t;
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                if (st.top() == c)
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }
        while (!st.empty())
        {
            t += st.top();
            st.pop();
        }
        reverse(t.begin(), t.end());
        return t;
    }
};