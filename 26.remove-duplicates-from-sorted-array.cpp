/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = nums.size();
        int k = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums.at(k) != nums.at(i))
            {
                nums.at(++k) = nums.at(i);
            }
        }
        return k + 1;
    }
};
// @lc code=end
