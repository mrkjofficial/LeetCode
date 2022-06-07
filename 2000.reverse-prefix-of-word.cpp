/*
 * @lc app=leetcode id=2000 lang=cpp
 *
 * [2000] Reverse Prefix of Word
 */

// @lc code=start
class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int i = 0, j = word.find(ch);
        if (j == string::npos)
        {
            return word;
        }
        while (i < j)
        {
            char t;
            t = word[i];
            word[i] = word[j];
            word[j] = t;
            i++;
            j--;
        }
        return word;
    }
};
// @lc code=end
