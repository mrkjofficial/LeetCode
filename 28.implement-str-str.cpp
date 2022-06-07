/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int pos = haystack.find(needle);
        if (pos != string::npos)
        {
            return pos;
        }
        else
        {
            return -1;
        }
    }
};
// @lc code=end
