/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        if (s.length() != t.length())
        {
            return false;
        }
        int n = s.length();
        unordered_map<char, int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[s[i]]++;
            hash[t[i]]--;
        }
        for (auto i : hash)
        {
            if (i.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
