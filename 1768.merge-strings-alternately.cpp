/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        string out = "";
        int i = 0, maxi = max(word1.size(), word2.size());
        while (i < word1.size() && i < word2.size())
        {
            out.push_back(word1[i]);
            out.push_back(word2[i]);
            i++;
        }
        while (i < maxi)
        {
            if (maxi == word1.size())
            {
                out.push_back(word1[i]);
            }
            else
            {
                out.push_back(word2[i]);
            }
            i++;
        }
        return out;
    }
};
// @lc code=end
