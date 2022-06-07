/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int i = 0, n = pattern.size();
        istringstream in(s);
        unordered_map<char, int> cMap;
        unordered_map<string, int> sMap;
        for (string word; in >> word; i++)
        {
            if (i == n || cMap[pattern[i]] != sMap[word])
            {
                return false;
            }
            cMap[pattern[i]] = sMap[word] = i + 1;
        }
        return i == n;
    }
};
// @lc code=end
