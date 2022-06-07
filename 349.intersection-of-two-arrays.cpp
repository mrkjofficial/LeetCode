/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        vector<int> ans;
        unordered_set<int> s(nums1.begin(), nums1.end());
        for (auto a : s)
        {
            if (find(nums2.begin(), nums2.end(), a) != nums2.end())
            {
                ans.push_back(a);
            }
        }
        return ans;
    }
};
// @lc code=end
