/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums.at(mid) < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return start;
    }
};
// @lc code=end
