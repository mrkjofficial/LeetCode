/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
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
        int c = 0, k = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums.at(k) == nums.at(i) && c < 1)
            {
                nums.at(++k) = nums.at(i);
                c++;
            }
            else if (nums.at(k) != nums.at(i))
            {
                nums.at(++k) = nums.at(i);
                c = 0;
            }
        }
        return k + 1;
    }
};
// @lc code=end
