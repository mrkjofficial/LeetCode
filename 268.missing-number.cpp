/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= nums.at(i) ^ i;
        }
        return ans ^ n;
    }
};
// @lc code=end
