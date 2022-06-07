/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int k = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums.at(i) != val)
            {
                nums.at(k++) = nums.at(i);
            }
        }
        return k;
    }
};
// @lc code=end
