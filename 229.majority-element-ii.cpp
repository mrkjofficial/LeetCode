/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        ios_base::sync_with_stdio(false);
        cout.tie(NULL);
        cin.tie(NULL);
        int n = nums.size() / 3;
        vector<int> ans;
        unordered_map<int, int> hash;
        for (auto i : nums)
        {
            hash[i]++;
        }
        for (auto i : hash)
        {
            if (i.second > n)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
// @lc code=end
