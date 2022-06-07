/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = strs.size();
        if (n == 0)
        {
            return "";
        }
        string ans = "";
        sort(strs.begin(), strs.end());
        string a = strs[0];
        string b = strs[n - 1];

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
            {
                ans = ans + a[i];
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};
// @lc code=end
