/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */

// @lc code=start
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = nums.size();
        int unique = nums.at(0);
        for (int i = 1; i < n; i++)
        {
            unique ^= nums.at(i);
        }
        return unique;
    }
};
// @lc code=end
