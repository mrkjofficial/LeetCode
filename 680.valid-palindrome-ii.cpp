/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution
{
public:
    bool validPalindrome(string s)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                int i1 = i, j1 = j - 1;
                int i2 = i + 1, j2 = j;
                while (i1 < j1 && s[i1] == s[j1])
                {
                    i1++;
                    j1--;
                }
                while (i2 < j2 && s[i2] == s[j2])
                {
                    i2++;
                    j2--;
                }
                return i1 >= j1 || i2 >= j2;
            }
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end
