/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        char sMap[128] = {0};
        char tMap[128] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            if (sMap[s[i]] == 0 && tMap[t[i]] == 0)
            {
                sMap[s[i]] = t[i];
                tMap[t[i]] = s[i];
            }
            else if (sMap[s[i]] != t[i] || tMap[t[i]] != s[i])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
