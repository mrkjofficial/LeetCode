/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */

// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int start = 0, mid, end = nums.size() - 1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (nums.at(mid) == target)
            {
                return mid;
            }
            else if (nums.at(mid) < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};
// @lc code=end
