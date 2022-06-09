/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        vector<int> hash(256, -1);
        int maxlen = 0, start = -1;
        for (int i = 0; i < s.size(); i++)
        {
            if (hash[s[i]] > start)
            {
                start = hash[s[i]];
            }
            hash[s[i]] = i;
            maxlen = max(maxlen, i - start);
        }
        return maxlen;
    }
};
// @lc code=end
