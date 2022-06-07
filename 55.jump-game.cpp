/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */

// @lc code=start
class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = nums.size();
        for (int i = 0, step = 0; i < n; i++)
        {
            if (i > step)
            {
                return false;
            }
            step = max(step, i + nums[i]);
        }
        return true;
    }
};
// @lc code=end
