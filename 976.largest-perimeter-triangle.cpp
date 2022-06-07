/*
 * @lc app=leetcode id=976 lang=cpp
 *
 * [976] Largest Perimeter Triangle
 */

// @lc code=start
class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < n - 2; i++)
        {
            if (nums.at(i) < nums.at(i + 1) + nums.at(i + 2))
            {
                return nums.at(i) + nums.at(i + 1) + nums.at(i + 2);
            }
        }
        return 0;
    }
};
// @lc code=end
