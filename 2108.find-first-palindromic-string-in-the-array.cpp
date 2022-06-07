/*
 * @lc app=leetcode id=2108 lang=cpp
 *
 * [2108] Find First Palindromic String in the Array
 */

// @lc code=start
class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        auto is_palindromic = [](auto &s)
        {
            for (int i = 0, j = s.size() - 1; i < j; ++i, --j)
            {
                if (s[i] != s[j])
                {
                    return false;
                }
            }
            return true;
        };
        for (auto &s : words)
        {
            if (is_palindromic(s))
            {
                return s;
            }
        }
        return "";
    }
};
// @lc code=end
