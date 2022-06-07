/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution
{
public:
    bool isPalindrome(string s)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int i = 0, j = s.size() - 1;
        while (i < j)
        {
            while (isalnum(s[i]) == false && i < j)
            {
                i++;
            }
            while (isalnum(s[j]) == false && i < j)
            {
                j--;
            }
            if (toupper(s[i]) != toupper(s[j]))
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
// @lc code=end
