/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        stack<char> st;
        for (auto c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty() || (st.top() == '(' && c != ')') ||
                    (st.top() == '{' && c != '}') ||
                    (st.top() == '[' && c != ']'))
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
// @lc code=end
