/*
 * @lc app=leetcode id=1332 lang=cpp
 *
 * [1332] Remove Palindromic Subsequences
 */

// @lc code=start
class Solution
{
public:
    int removePalindromeSub(string s)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        return 2 - equal(s.begin(), s.end(), s.rbegin());
    }
};
// @lc code=end
