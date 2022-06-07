/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int i = m - 1, j = n - 1, k = m + n - 1;
        while (i >= 0 && j >= 0)
        {
            if (nums1.at(i) < nums2.at(j))
            {
                nums1.at(k--) = nums2.at(j--);
            }
            else
            {
                nums1.at(k--) = nums1.at(i--);
            }
        }
        while (j >= 0)
        {
            nums1.at(k--) = nums2.at(j--);
        }
    }
};
// @lc code=end
